/* ex9-11-2.c -- chline（ch，i，j）实现指定字符在i列到j列的输出 */
#include <stdio.h>
void print_lines(char, int, int);
int main(void)
{
    char ch;
    int a, b;
    
    printf("请输入您要打印的字符：");
    scanf("%c", &ch);
    printf("请输入打印的开始列：");
    scanf("%d", &a);
    printf("请输入打印的结束列：");
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
