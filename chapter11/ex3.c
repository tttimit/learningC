/* ex3.c -- 读取输入行中的第一个单词到数组中，单词的定义是一串字符不含空格，制表
符，换行符  */
#include <stdio.h>
#define MAX 81
void get_word(char *);
int main(void)
{
    char word[MAX];
    
    printf("Enter a line, I will give you the first letter.\n");
    get_word(word);
    puts("---result---");
    puts(word);
    
    return 0;
}

void get_word(char * str)
{
    char c;
    int i = 0;
    _Bool reading_started = 0;
    
    while(c = getchar())
    {
        if(reading_started)
        {
            if(c == ' ' || c == '\t' || c == '\n')
                break;
            else
            {
                *(str + i) = c;
                i++;
            }
        }
        else
        {
            if(c != ' ' && c != '\n' && c != '\t')
            {
                reading_started = 1;
                *str = c;
                i++;
            }
        }
    }
}
