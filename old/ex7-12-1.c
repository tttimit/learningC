/*ex7-12-1.c ��ȡ�ַ�ֱ������#�������ȡ�Ŀո�����
��ȡ�Ļ��з����Լ���ȡ�����������ַ�����Ŀ*/ 
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
    printf("�ո�%d ���з���%d �����ַ���%d", space, newline, others);
    return 0;
}
