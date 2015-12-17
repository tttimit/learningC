// test3.c
#include <stdio.h>
#include <string.h>
#define M1 "How are ya, sweetie? "
char M2[40] = "Beat the clock.";
char * M3 = "chat";
int main(void)
{
    char words[80];     //字符数组
    printf(M1); //How are ya, sweetie? 并没有换行
    puts(M1);   //How are ya, sweetie?
    puts(M2);   //Beat the clock.
    puts(M2 + 1);   //eat the clock.
    strcpy(words, M2);
    strcat(words, " Win a toy."); 
    printf("----------------\n");
    puts(words);    //Beat the clock. Win a toy.
    words[4] = '\0';
    puts(words);    //Beat
    while(*M3)
        puts(M3++); //chat hat at t
    puts(--M3); //从--M3的位置开始打印直到换行或者空字符 t
    puts(--M3); //at
    M3 = M1;
    puts(M3);   //How are ya, sweetie?
    return 0;
}
