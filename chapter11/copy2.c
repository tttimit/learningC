/* copy2.c -- strcpy()������2�����ԣ�һ�Ƿ��ص�һ��������ֵ�����Ǵ������
��һ��ָ�룬��˿��Ը�ֵ��ĳ���ַ������ض�λ�ô� */
#include <stdio.h>
#include <string.h>
#define WORDS "beast"
#define SIZE 40
int main(void)
{
    char * orig = WORDS;
    char copy[SIZE] = "Be the best that you can be.";
    char * ps;
    
    puts(orig);
    puts(copy);
    ps = strcpy(copy + 7, orig);
    puts(ps);
    puts(copy);
    
    return 0;
}
