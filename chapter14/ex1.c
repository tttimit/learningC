/* ex1.c -- 编程练习1 -- 重做复习题5，但使用月份名的拼写代替月份号(别忘了可以使
用strcmp())。 附：复习题3：设计一个结构模版，保存一个月份名、一个3个字母的该月份
的缩写、该月的天数，以及月份号 附：复习题5.编写一个函数。当给出月份号后，程序返
回一年中到该月为止（包括该月）总共的天数。假定在外部声明了第2题中的结构模版和另
一个该结构的数组。*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "months.h" //提供结构体和数组

int main(void)
{
    char choice[10];
    int i, j, totaldays;
    
    printf("Please enter the month name you choose: ");
    while(gets(choice) != NULL && choice[0] != '\0')
    {
        for(i=0; i <= 12; i++)
        {
            if(i == 12)
            {
                printf("Sorry, %s does not exist.\n", choice);
                break;
            }
            if(strcmp(choice, year[i].name) == 0)
            {
                printf("starting sum.\n");
                totaldays = 0;
                for(j = 0; j <= i; j++)
                {
                    totaldays += year[j].days;
                }
                printf("There are %d days until %s.\n", totaldays, year[i].name);
                break;
            }
        }
        printf("Please enter the month name you want to calculate (empty line to"
                    "quit): ");
    }
    
    return 0;
}
