/* ex10.c -- дһ��������ִ�ж�ά����ķ������ܣ���дһ������ӡ���� */
#include <stdio.h>
void dd(int [][5], int rows);   //����
void print_arr(int [][5], int rows); //��ӡ
int main(void)
{
    int arr[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}};

    print_arr(arr, 3);
    dd(arr, 3);
    print_arr(arr, 3);
    
    return 0;
}

void dd(int arr[][5], int rows)
{
    int i, j;
    
    for(i=0; i < rows; i++)
    {
        for(j=0; j < 5; j++)
        {
            arr[i][j] *= 2;
        }
    }
}

void print_arr(int arr[][5], int rows)
{
    int i, j;
    
    for(i=0; i < rows; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        putchar('\n');
    }
}
