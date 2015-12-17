// ex2.c 修改ex1.c，使其遇到空白字符或者第n个字符后停止读取，不用scanf（）
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
