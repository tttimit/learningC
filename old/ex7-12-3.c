/* ex7-12-3.c -- ��ȡ������ֱ��0�����ձ��������ż����������0��
�ܸ�����ƽ���������������������ƽ������*/
#include <stdio.h>
int main(void)
{
    int num, odd_sum, even_sum;
    int odd_count, even_count;
    float odd_average, even_average;
    
    odd_sum = even_sum = 0;
    odd_count = even_count = 0;
    printf("����������������0������");
    scanf("%d", &num);
    while(num != 0)
    {
        if(num % 2 == 0)
        {
            even_count++;
            even_sum += num;
            printf("��ʱ��ż��������%d ƽ��ֵ��%d\n", even_count, even_sum);                
        }        
        else
        {
            odd_count++;
            odd_sum += num;
            printf("��ʱ������������%d ƽ��ֵ��%d\n", odd_count, odd_sum);
        }
        printf("��������һ������");
        scanf("%d", &num);
    }   
    printf("ż��������%d ƽ��ƽ������%.2f\n", even_count, (float)even_sum/even_count);
    printf("����������%d ����ƽ������%.2f\n", odd_count, (float)odd_sum/odd_count);
    return 0;      
} 
