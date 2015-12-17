/*ex7-12-1.c 读取字符直到遇到#，报告读取的空格数、
读取的换行符数以及读取的所有其他字符的数目*/ 
#include <stdio.h>
int main(void)
{
    char ch;
    int space=0, newline=0, others=0;
    while((ch = getchar()) != '#')
    {
        switch(ch)
        {
            case ' ':
                space++;
                break;
            case '\n':
                newline++;
                break;
            default:
                others++;
                break;
        }
    }
    printf("空格：%d 换行符：%d 其他字符：%d", space, newline, others);
    return 0;
}
