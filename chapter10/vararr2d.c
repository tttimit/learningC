/* vararr2d.c -- ʹ�ñ䳤����ĺ��� */
#include <stdio.h>
#define ROWS 3
#define COLS 4
int sum2d(int rows, int cols, int ar[rows][cols]);
int main(void)
{
    int i, j;
    int rs = 3;
    int cs = 10;
    int junk[ROWS][COLS] ={ //��������
        {2, 4, 6, 8},
        {3, 5, 7, 9},
        {12, 10, 8, 6}
    };
    
    int morejunk[ROWS-1][COLS+2] = {    //Ҳ�Ƕ�������
        {20, 30, 40, 50, 60, 70},
        {5, 6, 7, 8, 9, 10}
    };
    
    int varr[rs][cs];//VLA �䳤����
    
    for(i=0; i < rs; i++)
    {
        for(j=0; j < cs; j++)
        {
            varr[i][j] = i * j + j;
        }
    }
    
    printf("3x5 array\n");
    printf("Sum of all elements = %d\n", sum2d(ROWS, COLS, junk));
    
    printf("2x6 array\n");
    printf("Sum of all elements = %d\n", sum2d(ROWS-1, COLS+2, morejunk));
    
    printf("3x10 array\n");
    printf("Sum of all elements = %d\n", sum2d(rs, cs, varr));
    
    return 0;
}

//���ձ䳤������Ϊ�����ĺ���
int sum2d(int rows, int cols, int ar[rows][cols])
{
    int i, j, tot = 0;
    for(i=0; i < rows; i++)
    {
        for(j=0; j < cols; j++)
        {
            tot += ar[i][j];
        }
    }
    return tot;
}
