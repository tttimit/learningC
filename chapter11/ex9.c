/* ex9.c -- ��дһ�����������û�������ַ���ȥ���ո� */
#include <stdio.h>
#define MAX 81
char * eml_space(char *);
int get_input(char *);
int main(void)
{
    char str[MAX];
    char resstr[MAX];
    
    while(get_input(str) == 1)
    {
        printf("����ԭ�ַ���Ϊ��%s\n", str);
        
        
        /*������һ����Ҫע������⣬�����еı���Ϊ�ֲ����������뿪������ʱ���
        û�������壬���������eml_space���������˸��ִ���������һ���ֲ�����
        �ĵ�ַ�����ⲿ��������û������ġ��������Ĳ���*/
//        eml_space(str, resstr);
        printf("��ȥ�ո����ַ���Ϊ��%s\n", eml_space(str));
    }
    
    return 0;
}

int get_input(char * str)
{
    printf("������Ҫ���в������ַ���������������˳�����\n");
    gets(str);
    if(*str == '\0')
        return 0;
    return 1;
}

//char * eml_space(char * str, char * resstr)
char * eml_space(char * str)
{
    char str1[MAX];
    char * ptr;
    
    ptr = str1;
    while(*str)
    {
        if(*str != ' ')
        {
            *ptr = *str;
            ptr++;
        }
        str++;
    }
    *++ptr = '\0';
    printf("eml_space�����д���Ľ��%s\n", str1);

//    for(; *str; str++)
//    {
//        if(*str != ' ')
//        {
//            *ptr = *str;
//            ptr++;
//        }
//    }
//    *ptr = '\0';
//    printf("eml_space��������󣬼������ص��ַ���Ϊ%s\n", ptr);
    return str1;
}
