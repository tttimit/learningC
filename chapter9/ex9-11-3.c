/* ex9-11-3.c -- 3����������һ�����ַ����ڶ����Ǹ�������������Ҫ��ӡ������*/
#include <stdio.h>
void print1(char, int, int); 
int main(void)
{
    char ch;
    int a, b;
    
    printf("Enter the char you want to print: ");
    scanf("%c", &ch);
    printf("Enter the number of occurences you want to print every line: ");
    scanf("%d", &a);
    printf("Enter the number of lines you want to print: ");
    scanf("%d", &b);
    print1(ch, a, b);
    return 0;
}

void print1(char ch, int a, int b)
{
    int i, j;
    for(j = 1; j <= b; j++)
    {
        for(i=1; i <= a; i++)
            putchar(ch);
        putchar('\n');
    }
}
