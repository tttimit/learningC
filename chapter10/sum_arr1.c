/* sum_arr1.c -- ��һ�����������Ԫ�����  */
#include <stdio.h>
#define SIZE 10
int sum(int ar[], int n);
int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;
    
    answer = sum(marbles, SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    printf("The size of marbles is %d byutes.\n", sizeof marbles); 
                    //%zd��ʾsizeof�ķ���ֵ 
    return 0;
}

int sum(int ar[], int n)
{
    int i;
    int total = 0;
    
    for(i=0; i <n; i++ )
        total += ar[i]; 
    printf("The size of ar is %d bytes.\n", sizeof ar);
    printf("The location of ar is %p.\n", ar);
    
    return total;
}
