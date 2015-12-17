/* ex12.c -- 好多功能 */
#include <stdio.h>
void get_input(double [][5]);
double average_per_group(double []);
double average_all(double [][5]);
double get_max(double [][5]);
int main(void)
{
    double arr[3][5];
    get_input(arr);
    printf("每个数集（包含5个数值）的平均值\n");
    printf("第一个集合：%lf\n", average_per_group(arr[0]));
    printf("第二个集合：%lf\n", average_per_group(arr[1]));
    printf("第三个集合：%lf\n", average_per_group(arr[2]));
    printf("所有数值的平均值为: %lf\n", average_all(arr));
    printf("数组中最大的值为：%lf\n", get_max(arr));
    return 0;
}

void get_input(double arr[][5])
{
    int i = 0, j = 0, count = 0, res;
    double input;

    printf("请输入15个double类型的数字，程序会读取您输入的前15个作为输入\n");
    while(count<15)
    {
        if(res = (scanf("%lf", &input)) == 1)
        {
            i = count / 5;
            j = count % 5;
            arr[i][j] = input;
            count++;
        }
    }
}

double average_per_group(double arr[])
{
    int i;
    double total;
    
    for(i=0, total = 0; i < 5; i++)
    {
        total += arr[i];
    }
    return total / 5;
}

double average_all(double arr[][5])
{
    int i, j;
    double total;
    
    for(i=0,total=0; i < 3; i++)
    {
        for(j=0; j < 5; j++)
        {
            total += arr[i][j];
        }
    }
    return total/(i * j);
}

double get_max(double arr[][5])
{
    int i, j;
    double max;
    
    for(i=0, max = arr[0][0]; i < 3; i++)
    {
        for(j=0; j<5;j++)
        {
            if(max < arr[i][j])
                max = arr[i][j];
        }
    }
    return max;
}


















