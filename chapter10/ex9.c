/* ex9.c -- 把两个数组中的对应元素相加，放到第三个数组中。函数的参数包括3个数组
名和数组的大小。 */
#include <stdio.h>
void add(int [], int, int [], int, int[], int);
void print_arr(int[], int);
int main(void)
{
    int arr1[4] = {2, 4, 5, 8};
    int arr2[4] = {1, 0, 4, 6};
    int tar[4];
    
    add(arr1, 4, arr2, 4, tar, 4);
    print_arr(tar, 4);

    return 0;
}
void add(int arr1[], int l1, int arr2[], int l2, int tar[], int l3)
{
    int i;

    for(i=0; i < l1; i++)
    {
        tar[i] = arr1[i] + arr2[i];
    }
}

void print_arr(int arr[], int length)
{
    int i;
    
    for(i=0; i< length; i++)
    {
        printf("%d ", arr[i]);
    }
}
