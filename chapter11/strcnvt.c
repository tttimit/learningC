/* strcnvt.c -- 尝试使用strtol（）函数 */
#include <stdio.h>
#include <stdlib.h>
// long strtol(const char *nptr, char **endptr, int base)
int main()
{
    char number[30];
    char * end;
    long value;
    
    puts("Enter a number(empty line to quit): ");
    while(gets(number) && number[0] != '\0')
    {
        value = strtol(number, &end, 10);   //end会指向输入字符结束位置
        printf("value: %ld, stopped at %s(%d)\n", value, end, *end);
        value = strtol(number, &end, 16);
        printf("value: %ld, stopped at %s(%d)\n", value, end, *end);
        puts("Next number:");
    }
    puts("Bye!\n");
    
    return 0;
}
