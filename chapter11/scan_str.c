/* scan_str.c -- ʹ��scanf() */
#include <stdio.h>
int main(void)
{
    char name1[11], name2[11];
    int count;
    
    printf("Please enter 2 names.\n");
    count = scanf("%5s %10s", name1, name2);
    printf("I read the %d names %s and %s.\n", count, name1, name2);
    
    return 0;
    
    /* scanf()��������ִ�ж�ȡ���ٸ��ַ������� scanf("%5s", &name)������ȡ����5��
    ���������հ��ַ����ո��Ʊ�������з����������ĸ��̾ͽ��������
    ��ˣ��������������� Jesse Jukesʱ�����Ϊ Jesse Jukes
    ������ΪLiza Applebotthamʱ�����ΪLiza AppleBotth
    ������ΪPortensia Callowitʱ�����Ϊ Porte nsia
}
