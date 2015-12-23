/* ex2.c -- �����ϰ2 ��дһ���ļ����Ƴ��򡣳�����Ҫ�������л��Դ�ļ�����Ŀ��
�ļ�����������ʹ�ñ�׼I/O�Ͷ�����ģʽ */
/*
    Ŀǰ�����⣬û�����û��壬ÿ�ζ�ȡ1���ֽڷŵ�һ������Ϊ1���ַ����У�Ȼ�����
    ���ַ������ó�������ֽڣ�д�뵽�ļ��У������ٶȿ��ܱȽ����������Ǳ������л�
    �壬���ر��ļ���ʱ��ͻ��Զ�ˢ�²�д���ļ���
    �ļ��Ĵ�ģʽ��rb��wb���������b�Ļ��Ͳ�������������
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE_T 1
int main(int argc, char * argv[])
{
    FILE * fsrc, * fdes;
    char arr[SIZE_T];

    if(argc != 3)
    {
        fprintf(stderr, "Usage: ex2 source_filename dest_filename\n");
        exit(1);
    }
    if((fsrc = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr, "Cannot open source file %s.\n", argv[1]);
        exit(1);
    }
    if((fdes = fopen(argv[2], "wb")) == NULL)
    {
        fprintf(stderr, "Cannot open/create destination file %s.\n", argv[2]);
        exit(1);
    }
    while((fread(arr, sizeof(char), SIZE_T, fsrc)) != 0)
    {
        fwrite(arr, sizeof(char), SIZE_T, fdes);
    }
    fprintf(stdout, "Operation finished.\n");
    fclose(fsrc);
    fclose(fdes);
    return 0;
}
