/* ex6.c -- ��дһ������1000��1��10��Χ�ڵ�������ĳ��򡣽���ӡÿ���������˼��Ρ�
�ó����10����ͬ������ֵ���м��㡣*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, seed;
    static int arr[10];
    
    printf("Enter a positive integer as a seed: ");
    scanf("%d", &seed);
    srand(seed);
    for(i=0; i < 1000; i++)
    {
        arr[rand()%10]++;
    }
    for(i=0; i < 10; i++)
    {
        printf("%d ������ %d��.\n", i+1 , arr[i]);
    }

    return 0;
}
