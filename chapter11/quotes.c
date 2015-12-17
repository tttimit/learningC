/* quotes.c -- 把字符串看作指针 */
#include <stdio.h>
int main(void)
{
    printf("%s, %p, %#p, %c\n", "We", "We", "are", *"space farers");
    printf("%s, %#p, %c\n", "We", "We", *"We");
    return 0;
}


