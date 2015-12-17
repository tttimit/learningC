/* ex13.c -- 使用变长数组做12题 */
#include <stdio.h>
#define ROWS 3
#define COLS 5
void get_input(int, int, double arr[*][*]);  //不能写成 double [*][*] ,C99规定的
double get_group_average(int, double arr[*]);
double get_all_average(int, int, double arr[*][*]);
double get_max(int, int, double arr[*][*]);
int main(void)
{
    int rows = 3, cols = 5;
    double arr[rows][cols];
    
//    rows = 3;
//    cols = 5;

    printf("请输入15个double类型的值，程序在读取到第15个输入后，会自动停止读取\n");
    get_input(rows, cols, arr);
//    double arr[3][5] = {    //只有声明的时候才能这种方式初始化
//        {1.1, 2.2, 3.3, 4.4, 5.5},
//        {6.6, 7.7, 8.8, 9.9, 10.0},
//        {11.1, 12.2, 13.3, 14.4, 15.5}
//    };
    printf("每个数集的平均值为：\n");
    printf("第一个数集的平均值为：%lf\n", get_group_average(cols, arr[0]));
    printf("第二个数集的平均值为：%lf\n", get_group_average(cols, arr[1]));
    printf("第三个数集的平均值为：%lf\n", get_group_average(cols, arr[2]));
    printf("您输入的所有数值的平均值为：%lf\n", get_all_average(rows, cols, arr));
    printf("您输入的数值中的最大值为：%lf\n", get_max(rows, cols, arr));
    return 0;
}

void get_input(int rows, int cols, double arr[rows][cols])
{
    int count = 0;
    double number;
    
    while(count < rows * cols)
    {
        if(scanf("%lf", &number) == 1)
        {
            arr[count / cols][count % cols] = number;
            count++;
        }
    }
}

double get_group_average(int cols, double arr[cols])
{
    int i;
    double total;
    
    for(i=0, total = 0; i < cols; i++)
    {
        total += arr[i];
    }
    
    return total / cols;
}

double get_all_average(int rows, int cols, double arr[rows][cols])
{
    int i, j;
    double total;
    
    for(i=0, total=0; i < rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            total += arr[i][j];
        }
    }
    
    return total / (rows * cols);
}

double get_max(int rows, int cols, double arr[rows][cols])
{
    int i, j;
    double max;
    
    for(i=0, max = arr[0][0]; i < rows; i++)
    {
        for(j=0; j < cols; j++)
        {
            if(max < arr[i][j])
                max = arr[i][j];
        }
    }

    return max;
}
