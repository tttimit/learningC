/* ex13.c -- ����ͼ�������Ǵ�����ɴ��Ϸ��ص�����ͼ����ܻ����������塣Ϊ��
ϰ12����������ĺ������ú���Ӧ�ý�ÿһ��ֵ�����������ҵ�����ֵ�Ƚϣ������ֵ��
����Χÿ��ֵ�Ĳ����1��������������ֵ��ƽ��ֵ��ȡ������ӽ���������ȡ�����ֵ��
ע�⵽�߽��ϵĵ�����ڵ�����4��������������Ҫ���⴦��*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 81
void create(int [][30]);      //����һ���ļ���������20*30�ĵ������ַ����󲢱�����ļ�
void anti_peak(int [][30]);     //�������
void arr2file(FILE *, int [][30]);

int main(void)
{
    char fname1[MAX], fname2[MAX];
    char *ptr2;
    FILE * fsrc, * fimg;
    int ch;
    int  * arr[30];

    printf("please choose a name for the file: ");
    scanf("%s", fname1);
    if((fsrc = fopen(fname1, "w+")) == NULL)
    {
        fprintf(stderr, "Sorry, cannot open or create the file \"%s\".\n", fname1);
        exit(EXIT_FAILURE);
    }
    create(arr);       //����ļ�д��������ɵ�����
    anti_peak(arr);
    arr2file(fsrc, arr);

    ptr2 = strcpy(fname2, fname1);
    ptr2 = strcat(fname2, ".blue");
    if((fimg = fopen(fname2, "w+")) == NULL)
    {
        fprintf(stderr, "Sorry, cannot create the img filr for \"%s\".\n", fname1);
        exit(EXIT_FAILURE);
    }
    while(fscanf(fsrc, "%c ", &ch) == 1)
    {
        if(ch == '\n')
            fputc('\n', fimg);
        else
        {
            fprintf(fimg, "%c ", ch - 16);
            fprintf(stdout, "%c ", ch - 16);
        }
    }
    fclose(fsrc);
    fclose(fimg);
    printf("Done. Thanks for using!\n");

    return 0;
}

void create(int arr[][30])
{
    int row, col;

    for(row = 0; row < 20; row++)
    {
        for(col = 0; col < 30; col++)
        {
            arr[row][col] = rand() % 10 + 48;
        }
    }
}

void anti_peak(int arr[][30])
{
    int row, col;
    int ch;
    int chs, chx, chz,chy; //��ǰֵ���������ҵĲ�ֵ�ľ���ֵ
    int sum;
    double result;
    
    for(row = 1; row <= 20; row++)
    {
        for(col = 1; col <= 30; col++)
        {
            ch = arr[row][col];
            if(row != 1 && row != 20)
            {
               chs = ch - arr[row][col-1];
               chx = ch - arr[row][col+1];
            }
            else if(row == 1)
            {
               chs = 0;
               chx = ch - arr[row][col+1];
            }
            else
            {
               chs = ch - arr[row][col-1];
               chx = 0;
            }
            if(col != 1 && col != 30)
            {
               chz = ch - arr[row-1][col];
               chy = ch - arr[row+1][col];
            }
            else if(col == 1)
            {
               chz = 0;
               chy = ch - arr[row+1][col];
            }
            else
            {
                chy = 0;
                chz = ch - arr[row-1][col];
            }
            if(chs > 1 || chx > 1 || chz >1 || chy > 1)
            {
                result = ch + (chs + chx + chz + chy) / 4.0;
                if((result - floor(result)) > 0.5)
                    ch = floor(result) + 1;
                else
                    ch = floor(result);
                    
                arr[row][col] = ch;
            }
        }
    }
}

void arr2file(FILE *fptr, int arr[][30])
{
    int row, col;
    
    for(row = 0; row < 20; row++)
    {
        for(col = 0; col < 30; col++)
        {
            fprintf(fptr, "%c ", arr[row][col]);
        }
        fputc('\n', fptr);
    }
}
