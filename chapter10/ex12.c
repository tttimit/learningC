/* ex12.c -- �ö๦�� */
#include <stdio.h>
void get_input(double [][5]);
double average_per_group(double []);
double average_all(double [][5]);
double get_max(double [][5]);
int main(void)
{
    double arr[3][5];
    get_input(arr);
    printf("ÿ������������5����ֵ����ƽ��ֵ\n");
    printf("��һ�����ϣ�%lf\n", average_per_group(arr[0]));
    printf("�ڶ������ϣ�%lf\n", average_per_group(arr[1]));
    printf("���������ϣ�%lf\n", average_per_group(arr[2]));
    printf("������ֵ��ƽ��ֵΪ: %lf\n", average_all(arr));
    printf("����������ֵΪ��%lf\n", get_max(arr));
    return 0;
}

void get_input(double arr[][5])
{
    int i = 0, j = 0, count = 0, res;
    double input;

    printf("������15��double���͵����֣�������ȡ�������ǰ15����Ϊ����\n");
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


















