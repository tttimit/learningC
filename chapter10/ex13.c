/* ex13.c -- ʹ�ñ䳤������12�� */
#include <stdio.h>
#define ROWS 3
#define COLS 5
void get_input(int, int, double arr[*][*]);  //����д�� double [*][*] ,C99�涨��
double get_group_average(int, double arr[*]);
double get_all_average(int, int, double arr[*][*]);
double get_max(int, int, double arr[*][*]);
int main(void)
{
    int rows = 3, cols = 5;
    double arr[rows][cols];
    
//    rows = 3;
//    cols = 5;

    printf("������15��double���͵�ֵ�������ڶ�ȡ����15������󣬻��Զ�ֹͣ��ȡ\n");
    get_input(rows, cols, arr);
//    double arr[3][5] = {    //ֻ��������ʱ��������ַ�ʽ��ʼ��
//        {1.1, 2.2, 3.3, 4.4, 5.5},
//        {6.6, 7.7, 8.8, 9.9, 10.0},
//        {11.1, 12.2, 13.3, 14.4, 15.5}
//    };
    printf("ÿ��������ƽ��ֵΪ��\n");
    printf("��һ��������ƽ��ֵΪ��%lf\n", get_group_average(cols, arr[0]));
    printf("�ڶ���������ƽ��ֵΪ��%lf\n", get_group_average(cols, arr[1]));
    printf("������������ƽ��ֵΪ��%lf\n", get_group_average(cols, arr[2]));
    printf("�������������ֵ��ƽ��ֵΪ��%lf\n", get_all_average(rows, cols, arr));
    printf("���������ֵ�е����ֵΪ��%lf\n", get_max(rows, cols, arr));
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
