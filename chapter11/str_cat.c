/* str_cat.c -- 连接两个字符串。strcat()函数接受2个参数，把第二个参数中的字符串
添加到第一个字符串的末尾 */
#include <stdio.h>
#include <string.h>
#define SIZE 80
int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    
    puts ("What is your favorite flower?");
    gets(flower);
    strcat(flower, addon);
    puts(flower);
    puts(addon);
    
    return 0;
}
