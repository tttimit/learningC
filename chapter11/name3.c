/* name3.c -- ʹ��fgets()���������ж�ȡ */
#include <stdio.h>
#define MAX 81
int main(void)
{
    char name[MAX];
    char * ptr;
    
    printf("Hi, what's your name?\n");
    ptr = fgets(name, MAX, stdin);
    printf("%s? Ah! %s!\n", name, ptr);
    
    return 0;
    
    /*fgets()��ר��Ϊfile I/O��ƵĶ�ȡ����������ָ�������ַ��ĸ���������ȡ��n-1
    �������������з��󣬶�ȡ�ͻ������
    ����������ָ����ȡ�������ļ������̵Ļ�����Ϊstdin����stdio.h���塣
    fgets()�Ὣ��ȡ���Ļ��з��洢����������gets()�������������з�����
    */
}
