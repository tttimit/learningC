/* ex9-11-2.c -- chline��ch��i��j��ʵ��ָ���ַ���i�е�j�е���� */
#include <stdio.h>
void print_lines(char, int, int);
int main(void)
{
    char ch;
    int a, b;
    
    printf("��������Ҫ��ӡ���ַ���");
    scanf("%c", &ch);
    printf("�������ӡ�Ŀ�ʼ�У�");
    scanf("%d", &a);
    printf("�������ӡ�Ľ����У�");
    scanf("%d", &b);
    print_lines(ch, a, b);
    return 0;
}

void print_lines(char ch, int a, int b)
{
    int i;
    for(i=1; i < a; i++)
        putchar(' ');
    for(i=a; i <= b; i++)
        putchar(ch);
    putchar('\n');
}
