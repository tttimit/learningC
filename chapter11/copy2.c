/* copy2.c -- strcpy()的另外2个特性，一是返回第一个参数的值，二是传入参数
是一个指针，因此可以赋值到某个字符串的特定位置处 */
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
