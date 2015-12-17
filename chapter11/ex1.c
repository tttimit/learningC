/* ex1.c */
#include <stdio.h>
#define MAX 81
void gets1(char *, int n);
int main(void)
{
    char str[MAX];
    int n = 10;
    
    printf("Enter...\n");
    gets1(str, n);
    puts("----result----");
    puts(str);
    
    return 0;
}

void gets1(char *str, int n)
{
    int i = 0;
    
    for(; i<n ; i++)
    {
        scanf("%c", str + i);
    }
}
