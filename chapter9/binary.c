/* binary.c -- ����һ���������������������ʽ */
#include <stdio.h>
void to_binary(unsigned long n);
int main(void) 
{
    unsigned long n;
    
    printf("������Ҫת��������(����q�˳�����)��\n");
    while(scanf("%ul", &n) != 0)
    {
        printf("��Ӧ�Ķ�������Ϊ�� ");
        to_binary(n);
        putchar('\n');
        printf("��������Ҫת��������(����q�˳�����)��\n");
    }
    printf("Done.\n");
    return 0;
}

void to_binary(unsigned long n)
{
    unsigned long remain;
    
    if(n > 0)
    {
        remain = n % 2;
        to_binary(n/2);
        printf("%d",remain);
    }
//    else
//    {
//        printf("0");
//    }
}
