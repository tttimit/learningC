/* flc.c -- 有趣的常量 */
#include <stdio.h>
#define COLS 4
int sum2d(int ar[][COLS], int rows);    //计算二维数组，传入数组和行数
int sum(int ar[], int n);   //计算一维数组，传入输入和列数
int main(void)
{
    int total1, total2, total3;
    int * pt1;      //int类型的指针
    int (*pt2) [COLS];  //指向包含COLS个int的数组的指针
    
    pt1 = (int [2]){10, 20};    //这就是复合文字，pt1指向了数组10,20
    pt2 = (int [2][COLS]){{1, 2, 3, -9}, {4, 5, 6,-8}}; //复合文字
    
    total1 = sum(pt1, 2);
    total2 = sum2d(pt2, 2);//计算二维数组，pt2，共2行
    total3 = sum((int[]){4, 4, 4, 5, 5, 5}, 6);//传入复合文字，表示有6个元素
                            //(int[]){4,2,1} 表示有3个元素的复合文字
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
