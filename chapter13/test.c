/* test.c -- �������еĳ������������� */
#include <stdio.h>
int main(void)
{
    int a;
    char * ptr = "Let's go!";
    a = printf("the string is %s.\n", ptr);
    printf("printed %s return %d.\n", ptr, a);
//    a = printf("1");
//    printf("printed %s return %d.\n", "1", a);
    
    return 0;
}
