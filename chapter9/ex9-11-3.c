/* ex9-11-3.c -- 3个参数，第一个是字符，第二个是个数，第三个是要打印的行数*/
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
