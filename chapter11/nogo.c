/* nogo.c -- ������������������� */
//���ܣ� ��Ϊ�Ƚ�ANSWER��try��ֻ�ǱȽ�����ָ���ֵ�Ƿ���ͬ
#include <stdio.h>
#define ANSWER "Grant"
int main(void)
{
    char try[40];
    
    puts("Who is buried in Grant's tomb?");
    gets(try);
    while(try != ANSWER)
    {
        puts("No, that's wrong. Try again.");
        gets(try);
    }
    puts("That's right!");
    
    return 0;
}