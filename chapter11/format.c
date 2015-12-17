/* format.c -- 格式化一个字符串 sprintf()函数接受一个类似于printf()的参数，然后
把生成的字符串放到第一个参数中 */
#include <stdio.h>
#define MAX 20
int main(void)
{
    char first[MAX];
    char last[MAX];
    char formal[2 * MAX + 10];
    double prize;
    
    puts("Enter your first name: ");
    gets(first);
    puts("Enter your last name: ");
    gets(last);
    puts("Enter your prize money: ");
    scanf("%lf", &prize);
    sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize);
    puts(formal);
    
    return 0;
}/*~out:
Enter your first name:
Lingyun
Enter your last name:
Zhang
Enter your prize money:
2000
Zhang, Lingyun            : $2000.00*/
