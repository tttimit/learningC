// ex2.c �޸�ex1.c��ʹ�������հ��ַ����ߵ�n���ַ���ֹͣ��ȡ������scanf����
#include <stdio.h>
#define MAX 81
void gets1(char *, int n);
int main(void)
{
    char str[MAX];
    int n = 10;

    printf("Enter...\n");
    gets1(str, n);
    puts("----result----");
    puts(str);

    return 0;
}

void gets1(char *str, int n)
{
    int i = 0;
    char c;

    for(; i<n ; i++)
    {
        //scanf("%c", &c);
        c = getchar();
        if(c == ' ' || c == '\t' || c == '\n')
            break;
        else
            *(str + i) = c;
    }
}
