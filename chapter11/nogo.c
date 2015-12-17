/* nogo.c -- 这个程序能满足需求吗？ */
//不能！ 因为比较ANSWER和try，只是比较两个指针的值是否相同
#include <stdio.h>
#define ANSWER "Grant"
int main(void)
{
    char try[40];
    
    puts("Who is buried in Grant's tomb?");
    gets(try);
    while(try != ANSWER)
    {
        puts("No, that's wrong. Try again.");
        gets(try);
    }
    puts("That's right!");
    
    return 0;
}
