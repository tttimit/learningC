/* flc.c -- ��Ȥ�ĳ��� */
#include <stdio.h>
#define COLS 4
int sum2d(int ar[][COLS], int rows);    //�����ά���飬�������������
int sum(int ar[], int n);   //����һά���飬�������������
int main(void)
{
    int total1, total2, total3;
    int * pt1;      //int���͵�ָ��
    int (*pt2) [COLS];  //ָ�����COLS��int�������ָ��
    
    pt1 = (int [2]){10, 20};    //����Ǹ������֣�pt1ָ��������10,20
    pt2 = (int [2][COLS]){{1, 2, 3, -9}, {4, 5, 6,-8}}; //��������
    
    total1 = sum(pt1, 2);
    total2 = sum2d(pt2, 2);//�����ά���飬pt2����2��
    total3 = sum((int[]){4, 4, 4, 5, 5, 5}, 6);//���븴�����֣���ʾ��6��Ԫ��
                            //(int[]){4,2,1} ��ʾ��3��Ԫ�صĸ�������
    printf("total1 = %d\n", total1);
    printf("total2 = %d\n", total2);
    printf("total3 = %d\n", total3);
    
    return 0;
}

int sum2d(int ar[][COLS], int rows)
{
    int i, j, tot = 0;

    for(i=0;i<rows;i++)
        for(j=0;j<COLS;j++)
            tot += ar[i][j];

    return tot;
}

int sum(int ar[], int n)
{
    int i;
    int tot = 0;
    
    for(i=0;i<n;i++)
        tot += ar[i];

    return tot;
}
