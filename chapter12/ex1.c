/* ex1.c -- ��ʹ��ȫ�ֱ�������д�����嵥12.4�ĳ��� */
/*
    �����嵥12.4 global.c
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

