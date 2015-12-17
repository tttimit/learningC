/* ex7-12-3.c -- 读取整数，直到0。最终报告输入的偶数（不包括0）
总个数及平均数，输入的奇数个数及平均数。*/
#include <stdio.h>
int main(void)
{
    int num, odd_sum, even_sum;
    int odd_count, even_count;
    float odd_average, even_average;
    
    odd_sum = even_sum = 0;
    odd_count = even_count = 0;
    printf("请输入整数，输入0结束：");
    scanf("%d", &num);
    while(num != 0)
    {
        if(num % 2 == 0)
        {
            even_count++;
            even_sum += num;
            printf("此时：偶数个数：%d 平均值：%d\n", even_count, even_sum);                
        }        
        else
        {
            odd_count++;
            odd_sum += num;
            printf("此时，奇数个数：%d 平均值：%d\n", odd_count, odd_sum);
        }
        printf("请输入下一个数：");
        scanf("%d", &num);
    }   
    printf("偶数个数：%d 平均平均数：%.2f\n", even_count, (float)even_sum/even_count);
    printf("奇数个数：%d 奇数平均数：%.2f\n", odd_count, (float)odd_sum/odd_count);
    return 0;      
} 
