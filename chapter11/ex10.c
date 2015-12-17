/* ex10.c -- 编写一个函数，读取10个字符串或者遇到EOF，哪个先发生就直接终止读取。
还要有菜单选择功能 */
#include <stdio.h>
#include <string.h>
#define MAX 81
int get_input(char *[MAX]);
int get_menu(int *);
void print_original_str(char *[MAX], int);
void print_ascii_str(char *[MAX], int);
void print_increase_str(char *[MAX], int);
void print_firstletter_str(char *[MAX], int);
int main(void)
{
    char * str[MAX];
    int choice;
    
    get_input(str);
    while(get_menu(&choice))
    {
        switch(choice)
        {
            case 1:
                printf("您输入的字符串为：");
                print_original_str(str, strlen(str[MAX]));
                break;
            case 2:
                printf("您的输入按ASCII输出为：");
                print_ascii_str(str, strlen(str[MAX]));
                break;
            case 3:
                printf("您的输入按照长度递增输出为：");
                print_increase_str(str, strlen(str[MAX]));
                break;
            case 4:
                printf("您的输入按照第一个单词长度输出为：");
                print_firstletter_str(str, strlen(str[MAX]));
                break;
            case 5:
                printf("感谢使用，再见！\n");
                return 0;
            defalut:
                printf("程序发生异常，已自行终止！\n");
                return 0;
        }
    }
    
    return 0;
}

int get_menu(int *choice)
{
     printf("请选择您要执行的操作（按下对应的选项数组，并按回车键）：\n");
    while(1)
    {
        printf("1)输出原始字符串列表\t\t 2)按ASCII顺序输出字符串\n");
        printf("3)按长度递增顺序输出字符串\t\t 4)按字符串中第一个单词的长度输出字符串\n");
        printf("5)退出\n");
        scanf("%d", choice);
        if(*choice > 5 || *choice < 1)
        {
            printf("请按照正确的格式进行输入~\n");
            while(getchar() == '\n')
                continue;
        }
        else
        {
            return *choice;
        }
    }
}

int get_input(char *str[MAX])
{
    int i;
    
    i=0;
    printf("请先输入10个字符串，或按下ctrl+d终止输入字符串：\n");
    while(scanf("%s", *(str + i)) != EOF)
    {
        if(i < 10)
            i++;
        else
            break;
    }



    for(i = 0; i< 10; )
    {
        if(scanf("%s", *(str + i)) == 1)
            i++;
        else if(scanf("%s", *(str + i)) == EOF)
            break;
    }
    
    return 1;
}

void print_original_str(char *str[MAX], int len)
{
    int i;
    
    for(i=0; i < len; i++)
    {
        puts(*(str + i));
        putchar('\n');
    }
}

void print_ascii_str(char *str[MAX], int len)
{
    int i;
    
    
}

void print_increase_str(char * str[MAX], int len)
{
    
}
void print_firstletter_str(char * str[MAX], int len)
{
    
}
