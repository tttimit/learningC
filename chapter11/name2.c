/* name2.c -- 读取一个名字 */
#include <stdio.h>
#define MAX 81
int main(void)
{
    char name[MAX];
    char * ptr;
    
    printf("Hi, what's your name?\n");
    ptr = gets(name);
    printf("%s? Ah! %s!\n", name, ptr);
    return 0;
    
    /* 关于gets()函数，使用gets(name)时，会将读取到的字符串的地址赋值给name
    使用ptr = gets(name)时，函数返回值是一个指向读取到的字符串的地址，当然就可以
    赋值给指针了。*/
}
