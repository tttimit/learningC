/* ex3.c -- �����ϰ3 ��дһ���ļ����Ƴ�����ʾ�û�����ԭ�ļ���������ļ�����
��������ļ�д��ʱ������Ӧ��ʹ��ctype.h�ж����toupper()���������е��ı�ת����
��д��ʹ�ñ�׼I/O���ı�ģʽ */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 81
#define BUFFERLENGTH 1000
int main(void)
{
    char fsrc[MAX];
    char ftar[MAX];
    FILE * fs, * fd;
    char arr[1];
    
    printf("������Դ�ļ�����Ŀ���ļ������Կո������\n");
    while(scanf("%s %s", fsrc, ftar) == 2)
    {
        if((fs = fopen(fsrc, "rb")) == NULL)
        {
            fprintf(stderr, "�޷����ļ� %s.\n", fsrc);
            exit(1);
        }
        if((fd = fopen(ftar, "wb")) == NULL)
        {
            fprintf(stderr, "�޷��򿪻��ߴ���Ŀ���ļ� %s.\n", ftar);
            exit(1);
        }
        while((fread(arr, sizeof(char), 1, fs)) == 1)
        {
            if(islower(arr[0]))
                arr[0] = toupper(arr[0]);
            fwrite(arr, sizeof(char), 1, fd);
        }
        printf("������ɡ�\n");
        fclose(fs);
        fclose(fd);
        printf("������Ԫ�ļ�����Ŀ���ļ������Կո������������ʽ���뼴�˳�����\n");
    }
    printf("�����������л����ʹ�ã�\n");
    
    return 0;
}
