/* put_out.c -- 使用puts()来打印 */
#include <stdio.h>
#define DEF "I am a #defined string."
int main(void)
{
    char str1[80] = "An array was initialized to me.";
    const char * str2 = "A pointer was initialized to me.";
    
    puts("I'm an argument to puts().");
    puts(DEF);
    puts(str1);
    puts(str2);
    puts(&str1[5]);
    puts(str2+4);
    
    return 0;
    
    /* 使用puts()非常简单，直接传入一个字符串的地址即可 */
}
