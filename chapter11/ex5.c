/* ex5.c -- ��дһ��������2����������һ���������ַ����ڶ������ַ���ָ�룬���ַ�
���ַ����У��򷵻ط���ֵ���棩���ַ������ַ������򷵻�0ֵ���٣��� */
#include <stdio.h>
#define MAX 81
int is_within(char, char *);
int get_input(char *, char *);
int main(void)
{
    char ch;
    char str[MAX];
    int result;
    
    while(get_input(&ch, str)!= 0)
    {
        printf("���������ַ�Ϊ��%c �ַ���Ϊ��%s\n", ch, str);
        result = is_within(ch, str);
        if(result != 0)
            printf("���ַ��������ַ�����");
        else
            printf("���ַ����������ַ�����");
    }
    
    return 0;
}

int get_input(char * ch, char * str)
{
    printf("������Ҫ���Ե��ַ�����������˳�����\n");
    scanf("%c", ch);
    if(*ch == '\n')
        return 0;
//    while(getchar() == '\n')
//    {
//        printf("��ȡ����һ�����з���");
//    }
    printf("��������Ҫ���Ե��ַ�������������˳�����\n");
//    while(getchar() == '\n')
//        continue;
    scanf("%s", str);
    if(*str == '\0')
        return 0;

    return 1;
}


int is_within(char ch, char * str)
{
    char * ptr;
    int result;
    int i;
    
    printf("is_within�õ���chΪ%c, strΪ%s.\n", ch, str);
    ptr = str;
    result = 0;
    i = 0;
    while(*(ptr + i))
    {
        if(*(ptr + i) == ch)
            result = 1;
        i++;
    }
    
    return result;
}
