/* ex1.c -- 不使用全局变量，重写程序清单12.4的程序 */
/*
    程序清单12.4 global.c
    -----------------
    #include <stdio.h>
    int units = 0;
    void critic(void);
    int main(void)
    {
        extern int units;
        
        printf("How many pounds to firkin of butter?\n");
        scanf("%d", &units);
        while(units != 56)
            critic();
        printf("You must have looked it up!\n");
        return 0;
    }
    
    void critic(void)
    {
        printf("No luck, chummy. Try again.\n");
        scanf("%d", &units);
    }
*/
#include <stdio.h>
void critic(int *);
int main(void)
{
    int units = 0;
    
    printf("How many pounds to firking of butter?\n");
    scanf("%d", &units);
    while(units != 56)
        critic(&units);
    printf("You must have looked it up!\n");
    return 0;
    
}

void critic(int * unit)
{
    printf("No luck, chummy. Try again.\n");
    scanf("%d", unit);
}

