/* quit_chk.c -- ĳ����Ŀ�ʼ�������ж�һ�������Ƿ�Ӧ��ֹͣ��ȡ���� */
#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIM 100
#define STOP "quit"
int main(void)
{
    char input[LIM][SIZE];
    int ct = 0;
    
    printf("Enter up to %d lines(type quit to quit): \n", LIM);
    while(ct < LIM && gets(input[ct]) != NULL &&strcmp(input[ct], STOP) != 0)
        //������������δ��������
        //��ȡ���벻ΪNULL��һ������EOF�᷵��NULL
        //strcmp()�����Ƚ�������ַ���quit�Ƿ�һ����һ���򷵻�0����һ�����ط�0
        
        //���⣬��������Ϊ���������һ�����о��˳�ѭ��
        //��������ĳһ�е�ĩβ����2�λس��󣬾ͻ�����һ�����У�gets()��ѿ��ַ��ŵ�����
        //while(ct < LIM && gets(input[ct]) != NULL && input[ct] != '\0'
        //����δ���������ܶ�ȡ���ַ���input[ct] �����'\0'˵����һ��ʱ���У�Ҳ��������
        
    {
        ct++;
    }
    printf("%d strings entered\n", ct);
    
    return 0;
}
