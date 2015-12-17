/* ex6.c -- ���������ָ��ķ�ʽ����һ����ά���� */
#include <stdio.h>
void copy_arr(double[], double[], int);
void copy_prr(double *, double *, int);
void print_arr(int r, int c, double [r][c]);    //���鷽ʽ����
void print_prr(int, int c, double [][c]);   //ָ�뷽ʽ��������һ��[]������ָ��
int main(void)
{
    double source[3][4] = {
        {1.1, 2.2, 3.3, 4.4},
        {5.5, 6.6, 7.7, 8.8},
        {9.9, 10.1, 11.2, 12.3}
    };
    double target1[3][4];
    double target2[3][4];
    int i;
    
    for(i=0; i<3; i++)
    {
        copy_arr(source[i], target1[i], 4);
    }
//    print_arr(3, 4,target1);
    print_prr(3, 4, target1);
    
    for(i=0; i <3; i++)
    {
        copy_prr(*(source + i), *(target2 + i), 4);
    }
//    print_arr(3, 4,target2);
    print_prr(3, 4, target2);

    return 0;
}

void copy_arr(double source[], double target1[], int length)
{
    int i;
    
    for(i=0; i < length; i++)
    {
        target1[i] = source[i];
    }
}

void copy_prr(double * source, double * target2, int length)
{
    int i;
    
    for(i=0; i < length; i++)
    {
        *(target2 + i) = *(source + i);
    }
}

void print_arr(int rows, int cols, double source[rows][cols])
{
    int i, j;

    for(i=0; i < rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("%.1lf ", source[i][j]);
        }
    }
    putchar('\n');
}

void print_prr(int r, int c, double  ptr[][c])  //ptr��һ��ָ��c��ô����double�����ָ��
{
    int i, j;
    for(i=0; i < r; i++)
    {
        for(j=0; j < c; j++)
        {
            printf("%.1lf ", *(*(ptr+i) +j));
        }
    }
    putchar('\n');
}
