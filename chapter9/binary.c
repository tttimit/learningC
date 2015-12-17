/* binary.c -- 输入一个整数，返回其二进制形式 */
#include <stdio.h>
void to_binary(unsigned long n);
int main(void) 
{
    unsigned long n;
    
    printf("请输入要转换的整数(输入q退出程序)：\n");
    while(scanf("%ul", &n) != 0)
    {
        printf("对应的二进制数为： ");
        to_binary(n);
        putchar('\n');
        printf("请输入您要转换的整数(输入q退出程序)：\n");
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
