/* no_data.c -- δ����ʼ�������� */
#include <stdio.h>
#define SIZE 4
int main(void)
{
    int no_data[SIZE];
    int i;
    
    printf("%2s%l4s\n", "i", "no_data[i] ");
    for(i=0; i < SIZE; i++)
        printf("%2d%l4d\n", i, no_data[i]);
    return 0;
}
