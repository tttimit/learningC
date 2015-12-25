/* tttt.c */
#include <stdio.h>
int main(void)
{
    int arr[20][30];
    create(arr);
    fo
    
    
    
    
    if
}
void anti_peak(int arr[][30])
{
    int row, col;
    int ch;
    int chs, chx, chz,chy; //当前值与上下左右的差值的绝对值
    int sum;

    for(row = 1; row <= 20; row++)
    {
        for(col = 1; col <= 30; col++)
        {
            ch = arr[row][col];
            if(row != 1 && row != 20)
            {
               chs = abs(ch - arr[row][col-1]);
               chx = abs(ch - arr[row][col+1]);
            }
            else if(row == 1)
            {
               chs = 0;
               chx = abs(ch - arr[row][col+1]);
            }
            else
            {
               chs = abs(ch - arr[row][col-1]);
               chx = 0;
            }
            if(col != 1 && col != 30)
            {
               chz = abs(ch - arr[row-1][col]);
               chy = abs(ch - arr[row+1][col]);
            }
            else if(col == 1)
            {
               chz = 0;
               chy = abs(ch - arr[row+1][col])
            }
            else
            {
                chy = 0;
                chz = abs(ch - arr[row-1][col]);
            }
        }
    }
}
