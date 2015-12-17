/* test.c */
#include <stdio.h>
#include <string.h>
char * pr(char *str);
int main()
{
    char *x;
    
//    x = pr("Ho Ho Ho! ");
    x = pr("");
//    putchar('\0');
//    putchar('\n');
//    printf("%s", x);
}

char * pr(char *str)
{
    char * pc;
    
    pc = str;
    while(*pc)
    {
        putchar(*pc++);
    }
    do{
//        putchar(*--pc);
        putchar(*pc--);
    } while(pc - str);
    return (pc);
}
