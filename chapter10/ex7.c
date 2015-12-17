/* ex7.c -- 复制一个7个元素数组中的第3到第5个元素到另一个长度为3的数组中。复制
的函数不需要修改，只需要修改传入的参数。*/
#include <stdio.h>
void copy_prr(int [], int [], int);
void print_prr(int *, int);
int main(void)
{
    int arr[7] = {2, 4, 6, 8, 10, 12, 14};
    int tar[3];

    copy_prr(arr + 2, tar, 3);
    print_prr(tar, 3);

    return 0;
}

void copy_prr(int arr[], int tar[], int length)
{
    int i;

    for(i=0; i < length; i++)
    {
        *(tar + i) = *(arr + i);
    }
}

void print_prr(int arr[], int length)
{
    int i;
    
    for(i=0; i < length; i++)
    {
        printf("%d ", *(arr + i));
    }
}

