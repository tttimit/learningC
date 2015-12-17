/* ex8.c -- 初始化一个3x5的二维double数组，并利用变长数组的函数复制该数组，并
打印该数组。*/
#include <stdio.h>
#define ROWS 3
#define COLS 5
void copy_prr(int rows, int cols, double [rows][cols], double[rows][cols]);
void print_arr(int rows, int cols, double arr[rows][cols]);
int main(void)
{
    int rows = 3, cols = 5;
    double source[ROWS][COLS] = {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {6.6, 7.7, 8.8, 9.9, 10.1},
        {11.2, 12.3, 13.4, 14.5, 15.6}
    };
    double target[rows][cols];

    copy_prr(rows, cols, source, target);
    print_arr(rows, cols, target);
}

void copy_prr(int rows, int cols, double source[rows][cols],
                double target[rows][cols])
{
    int i, j;
    for(i=0; i < rows; i++)
    {
        for(j=0; j < cols; j++)
        {
            target[i][j] = source[i][j];
        }
    }
}

void print_arr(int rows, int cols, double arr[rows][cols])
{
    int i, j;
    
    for(i=0; i < rows; i++)
    {
        for(j=0; j < cols; j++)
            printf("%0.2lf ", arr[i][j]);
        putchar('\n');
    }
    putchar('\n');
}
