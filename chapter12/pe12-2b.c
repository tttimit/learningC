// ex2.c
// pe12-2b.c
#include <stdio.h>
#include "pe12-2a.h"
static int mode;
static float fuel;
static float distance;
int main(void)
{
    int mode;

    printf("Enter 0 for metric mode. 1 for US mode: ");
    scanf("%d", &mode);
    while(mode >= 0)
    {
        set_mode(mode);
        get_info();
        show_info();
        printf("Enter 0 for metric mode. 1 for US mode");
        printf("(-1 to quit):");
        scanf("%d", &mode);
    }
    printf("Done.\n");
    return 0;
}

void set_mode(int m)
{
    if(m > 1)
    {
        printf("Invalid mode specified. Mode 1(US) used.\n");
        m = 1;
    }
    mode = m;
}

void get_info()
{
    if(mode == 1)
    {
        printf("Enter the distance traveled in miles: ");
        scanf("%f", &distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%f", &fuel);
    }
    else if(mode == 0)
    {
        printf("Enter the distance traveled in kilometers: ");
        scanf("%f", &distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%f", &fuel);
    }
}
void show_info()
{
    float result = 0;
    
    if(mode == 1)
    {
        result = distance / fuel;
        printf("Fuel consumption is %.2f miles per gallon.\n", result);
    }
    else if(mode == 0)
    {
        result = fuel / distance * 100;
        printf("Fuel consumption is %.2f kilometers per 100km.\n", result);
    }
}

/* ~out:
    Enter 0 for metric mode. 1 for US mode: 0
    Enter distance traveled in kilmeters: 600
    Enter fuel consumed in liters: 78.8
    Fuel consumption is 13.13 liters per 100km.
    Enter 0 for metric mode. 1 for US mode: 1
    Enter distance traveled in miles: 434
    Enter fuel consumed in gallons: 12.7
    Fuel consumption is 34.2 miles per gallon.
    Enter 0 for metric mode. 1 for US mode: 3
    Invalid mode specified. Mode 1(US) used.
    Enter distance traveled in miles: 388
    Enter fuel consumed in gallons: 15.3
    Fuel consumption is 25.4 miles per gallon.
    Enter 0 for metric mode. 1 for US mode(-1 to quit): -1
    Done.
*/
    

