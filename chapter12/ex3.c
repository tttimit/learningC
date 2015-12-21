/* ex3.c -- 修改练习2中的程序，使其仅使用自动变量 */
#include <stdio.h>
void set_mode(int *);
void get_info(int *, float *, float *);
void show_info(int *, float *, float *);
int main(void)
{
    int mode = 0;
    float distance = 0;
    float fuel = 0;
//    int * mode = &mode1;
//    float * fuel = &fuel1;
//    float * distance = &distance1;
    
    printf("Enter 0 for metric mode. 1 for US mode: ");
    scanf("%d", &mode);
    while(mode >= 0)
    {
        set_mode(&mode);
        get_info(&mode, &distance, &fuel);
        show_info(&mode, &distance, &fuel);
        printf("Enter 0 for metric mode. 1 for US mode");
        printf("(-1 to quit):");
        scanf("%d", &mode);
    }
    printf("Done.\n");
    return 0;
}
void set_mode(int * mode)
{
    if(*mode > 1)
    {
        printf("Invalie mode specified. Mode 1(US) uesd.\n");
        *mode = 1;
    }
}

void get_info(int * mode,float * distance, float * fuel)
{
    if(*mode == 1)
    {
        printf("Enter the distance traveled in miles: ");
        scanf("%f", distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%f", fuel);
    }
    else if(*mode == 0)
    {
        printf("Enter the distance traveled in kilometers: ");
        scanf("%f", distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%f", fuel);
    }
}

void show_info(int * mode, float * distance, float * fuel)
{
    float result = 0;

    if(*mode == 1)
    {
        result = *distance / *fuel;
        printf("Fuel consumption is %.2f miles per gallon.\n", result);
    }
    else if(*mode == 0)
    {
        result = *fuel / *distance * 100;
        printf("Fuel consumption is %.2f kilometers per 100km.\n", result);
    }
}
