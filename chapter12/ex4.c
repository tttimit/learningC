/* ex4.c -- ��дһ�������������غ����������õĴ���������һ��ѭ���в��� */
#include <stdio.h>
int return_times();
int main(void)
{
    int i;
    
    for(i = 0; i < 10; i ++)
    {
        printf("This is %d times.\n", return_times());
    }
    
    return 0;
}

int return_times(void)
{
    static int times;
    return ++times;
}
