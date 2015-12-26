/* temptest.c */
#include <stdio.h>
#include <stdlib.h>
#define ROW 20
#define COL 30
void create(int (*)[COL]);
void arr2file(FILE *, int (*)[COL]);
void anti_peak(int (*arr)[COL]);
int main(void)
{
    int arr[ROW][COL];
    FILE * fp, * fp1;

    fp = fopen("test", "w+");
    create(arr);
    arr2file(fp, arr);
    fclose(fp);
    
    fp1 = fopen("testanti", "w+");
    anti_peak(arr);
    arr2file(fp1, arr);
    fclose(fp1);
   
    return 0;
}

void create(int arr[ROW][COL])
{
    int row, col;
    int temp;

    for(row = 0; row < ROW; row++)
    {
        for(col = 0; col < COL; col++)
        {
            temp = rand() % 10 + 48;    //字符0-9的十进制表示
            arr[row][col] = temp;
        }
    }
	printf("create arr finished.\n");
}

void arr2file(FILE *fptr, int (*arr)[COL])
{
    int row, col;

    for(row = 0; row < ROW; row++)
    {
        for(col = 0; col < COL; col++)
        {
            fprintf(fptr, "%c", arr[row][col]);
            if(col != 29)
                fprintf(fptr, " ");
        }
        if(row != 19)
            fputc('\n', fptr);
    }
	printf("arr to file finished.\n");
}

void anti_peak(int (*arr)[COL])
{
    int row, col;
    int ch;
    int chs, chx, chz,chy; //当前值与上下左右的差值的绝对值
    int sum, count;
    double result;

    for(row = 0; row < ROW; row++)
    {
        for(col = 0; col < COL; col++)
        {
            ch = arr[row][col];
            if(row == 0 && row != ROW -1)
            {
               chs = 0;
               chx = ch - arr[row+1][col];
            }
            else if(row == ROW - 1 && row != 0)
            {
               chs = ch - arr[row - 1][col];
               chx = 0;
            }
            else if(row != 0 && row != ROW -1)
            {
               chs = ch - arr[row - 1][col];
               chx = ch - arr[row + 1][col];
            }
            else
            {
                chs = 0;
                chx = 0;
            }
            if(col == 0 && col != COL - 1)
            {
               chz = 0;
               chy = ch - arr[row][col+1];
            }
            else if(col == COL - 1 && col != 0)
            {
                chz = ch - arr[row][col-1];
                chy = 0;
            }
            else if(col != 0 && col != COL - 1)
            {
               chz = ch - arr[row][col-1];
               chy = ch - arr[row][col+1];
            }
            else 
            {
                chz = 0;
                chy = 0;
            }
            
            if(abs(chs)> 1 || abs(chx)> 1 || abs(chz >1) || abs(chy) > 1)
            {
                result = 0;
                count = 0;
                if(chs)
                {
                    result += chs;
                    count++;
                }
                if(chx)
                {
                    result += chx;
                    count++;
                }
                if(chz)
                {
                    result += chz;
                    count++;
                }
                if(chy)
                {
                    result += chy;
                    count++;
                }
                result = ch - ((float)result/count);
                if((result - (int)result) >= 0.5)
                    ch = (int)result + 1;
                else
                    ch = (int)result;
                printf("now arr[%d][%d] is %d\n", row, col, ch);
                arr[row][col] = ch;
            }
        }
    }
	printf("anti-peak finished.\n");
}
