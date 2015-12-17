/* test2.c */
#include <stdio.h>
int main(void)
{
    char sign = '$';
    char  * ptr = "$";
    printf("%c, %p, %p\n", sign, &sign, &sign + 1);
    printf("%s, %p, %p\n", ptr, ptr, ptr + 1);

    return 0;
}
