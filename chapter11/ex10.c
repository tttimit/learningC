/* ex10.c -- ��дһ����������ȡ10���ַ�����������EOF���ĸ��ȷ�����ֱ����ֹ��ȡ��
��Ҫ�в˵�ѡ���� */
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
                printf("��������ַ���Ϊ��");
                print_original_str(str, strlen(str[MAX]));
                break;
            case 2:
                printf("�������밴ASCII���Ϊ��");
                print_ascii_str(str, strlen(str[MAX]));
                break;
            case 3:
                printf("�������밴�ճ��ȵ������Ϊ��");
                print_increase_str(str, strlen(str[MAX]));
                break;
            case 4:
                printf("�������밴�յ�һ�����ʳ������Ϊ��");
                print_firstletter_str(str, strlen(str[MAX]));
                break;
            case 5:
                printf("��лʹ�ã��ټ���\n");
                return 0;
            defalut:
                printf("�������쳣����������ֹ��\n");
                return 0;
        }
    }
    
    return 0;
}

int get_menu(int *choice)
{
     printf("��ѡ����Ҫִ�еĲ��������¶�Ӧ��ѡ�����飬�����س�������\n");
    while(1)
    {
        printf("1)���ԭʼ�ַ����б�\t\t 2)��ASCII˳������ַ���\n");
        printf("3)�����ȵ���˳������ַ���\t\t 4)���ַ����е�һ�����ʵĳ�������ַ���\n");
        printf("5)�˳�\n");
        scanf("%d", choice);
        if(*choice > 5 || *choice < 1)
        {
            printf("�밴����ȷ�ĸ�ʽ��������~\n");
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
    printf("��������10���ַ���������ctrl+d��ֹ�����ַ�����\n");
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
