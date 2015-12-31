/* ex13.c -- ����ͼ�������Ǵ�����ɴ��Ϸ��ص�����ͼ����ܻ����������塣Ϊ��
ϰ12�����������ĺ������ú���Ӧ�ý�ÿһ��ֵ�����������ҵ�����ֵ�Ƚϣ������ֵ��
����Χÿ��ֵ�Ĳ����1��������������ֵ��ƽ��ֵ��ȡ������ӽ���������ȡ�����ֵ��
ע�⵽�߽��ϵĵ�����ڵ�����4��������������Ҫ���⴦����*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 81
#define ROW 20
#define COL 30
void create(int (*)[30]);      //����һ�����飬Ϊ�����е�ÿ���ֵ
void anti_peak(int (*)[30]);     //�������
void arr2file(FILE *, int (*)[30]);

int main(void)
{
    char fname1[MAX], fname2[MAX];
    char *ptr2;
    FILE * fsrc, * fimg;
    int ch;
    int arr[ROW][COL];

    printf("please choose a name for the file: ");
    scanf("%s", fname1);
    if((fsrc = fopen(fname1, "w+")) == NULL)
    {
        fprintf(stderr, "Sorry, cannot open or create the file \"%s\".\n", fname1);
        exit(EXIT_FAILURE);
    }
    create(arr);
    anti_peak(arr);
    arr2file(fsrc, arr);

    rewind(fsrc);
    
    ptr2 = strcpy(fname2, fname1);
    ptr2 = strcat(fname2, ".biii");
    if((fimg = fopen(fname2, "w")) == NULL)
    {
        fprintf(stderr, "Sorry, cannot create the img file \"%s\".\n", fname1);
        exit(EXIT_FAILURE);
    }
    while((ch = fgetc(fsrc)) != EOF)
    {
        if(ch == '\n')
            fputc('\n', fimg);
        else if(ch == ' ')
            fputc(' ', fimg);
        else
        {
            fprintf(fimg, "%c", ch - 16);
        }
    }
    fclose(fsrc);
    fclose(fimg);
    printf("Done. Thanks for using!\n");

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
            temp = rand() % 10 + 48;    //�ַ�0-9��ʮ���Ʊ�ʾ
            arr[row][col] = temp;
        }
    }
	printf("create arr finished.\n");
}

void anti_peak(int (*arr)[COL])
{
    int row, col;
    int ch;
    int chs, chx, chz,chy; //��ǰֵ���������ҵĲ�ֵ�ľ���ֵ
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

void arr2file(FILE *fptr, int (*arr)[COL])
{
    int row, col;

    for(row = 0; row < ROW; row++)
    {
        for(col = 0; col < COL; col++)
        {
            fprintf(fptr, "%c", arr[row][col]);
            if(col != COL - 1)
                fprintf(fptr, " ");
        }
        if(row != ROW -1)
            fputc('\n', fptr);
    }
}