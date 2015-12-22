/* ex6.c -- 编写一个产生1000个1到10范围内的随机数的程序。仅打印每个数产生了几次。
让程序对10个不同的种子值进行计算。*/
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
        printf("%d 出现了 %d次.\n", i+1 , arr[i]);
    }

    return 0;
}
