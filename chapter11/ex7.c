/* ex7.c -- ��дһ������string_in()����2���ַ���ָ����Ϊ����������ڶ����ַ�����
�����ڵ�һ���ַ����У��򷵻ر��������ַ�����ʼ�ĵ�ַ�����򷵻ؿ�ָ�� */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 81
char *string_in(char *, char *);
int get_input(char *, char *);
int main(void)
{
    char str1[MAX];
    char str2[MAX];
    char * ptr;

    while(get_input(str1, str2) == 1)
    {
        printf("������������ַ���Ϊ��%s, %s\n", str1, str2);
        ptr = string_in(str1, str2);
        if(ptr == NULL)
            printf("�ڶ����ַ������ڵ�һ���ַ�����\n");
        else
            printf("�ڶ����ַ��������ڵ�һ����\nԭ�ַ�����ַΪ%p,"
                    "Ŀ���ַΪ%p\n", str1,ptr);
    }
    
    return 0;
}

int get_input(char *str1, char *str2)
{
    printf("�������һ���ַ�������������˳����򣩣�\n");
    gets(str1);
    if(*str1 == '\0')
        return 0;
    printf("������ڶ����ַ�������������˳����򣩣�\n");
    gets(str2);
    if(*str2 == '\0')
        return 0;
    printf("������������ַ����ֱ�Ϊ%s,%s\n", str1, str2);
    return 1;
}

char * string_in(char *str1, char *str2)
{
    int i, j;
    int count;
    bool matched;
    char * ptr;

    i=0;
    j=0;
    ptr = str1;
    matched = false;
    count = strlen(str2);
    while(*ptr++)
    {
        if(*(str1 + i) == *(str2 + j))
        {
            if(matched)
            {
                count--;
                if(count == 0)
                    return ptr - strlen(str2);
            }
            else
            {
                matched = true;
                count--;
            }
            j++;
        }
        else
        {
            if(matched)
            {
                count = strlen(str2);
                matched = false;
                j=0;
            }
        }
        i++;
    }
    return NULL;
}
