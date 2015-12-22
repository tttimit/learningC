/* ex5.c -- 编写一个产生100个1到10范围内的随机数的程序，并且可以降序排序（可以
将11章中的排序算法稍加改动来对整数进行排序。这里，对数字本身进行排序即可）。
11章的那个字符串排序算法是选择排序，即先找出最大的放在第一个位置，再找出第二个
最大的放在第二个位置，再找出第三大放在第三个位置。。。*/
#include <stdio.h>
#include <stdlib.h>
#define LENGTH 100
void generate100(int *);
void sort_numbers(int *);
int main(void)
{
    int arr[LENGTH];
    int i;
    
    generate100(arr);
    sort_numbers(arr);
    for(i = 0 ; i < LENGTH ; i++)
        printf("%d ", arr[i]);
    putchar('\n');
    return 0;
}

void generate100(int * arr)
{
    int i;
    
    for(i = 0; i < LENGTH; i++)
    {
        arr[i] = rand() % 10 + 1;
    }
    printf("assignment finished.\n");
}
//choose sort
void sort_numbers(int * arr)
{
    int i,j;
    int temp;

    for(i=0; i < LENGTH; i++)
        for(j=i+1; j< LENGTH; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
}
