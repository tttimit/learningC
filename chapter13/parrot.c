/* parrot.c -- ʹ��fgets()��fputs()���� */
#include <stdio.h>
#define MAXLINE 20
int main(void)
{
    char line[MAXLINE];
    
    while(fgets(line, MAXLINE, stdin) != NULL && line[0] != '\n')
        fputs(line, stdout);
    return 0;
}
/* ����������е��ر�ģ�����lineֻ������19����Ч�ַ������һ���ַ���\0������
fgets��������ÿ�ζ�ȡ19���ַ���Ȼ���ӡ��19���ַ������ĳһ��������ַ���Ŀ����
19���������´ζ�ȡ���ڵ�20���ַ���������Ȼ���ӡ��һ��19���ַ����´ο�ʼ��ʱ��
Ҳ�Ǵ��ϴζ�ȡ�����ַ�����һ���ַ�����ʼ������ֱ��������β�� */
