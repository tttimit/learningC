#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "months.h"
int main(void)
{
    char months[10];
    char mmm[2];
    int i;
    
    scanf("%s", months);
    printf("您的输入为：%s\n", months);
    
//    if(strcmp(months, year[11].suoxie) == 0)
//    {
//        printf("%s 与 Dec 匹配！\n", months);
//    }
    
    for(i=0; i <= 12; i++)
    {
        if(i == 12)
        {
            printf("没发现匹配.\n");
            break;
        }
        else
        {
            printf("matching: %s: %s-%s-%d\n", months, year[i].name, year[i].suoxie, year[i].no);
            if(strcmp(months, year[i].name) ==  0)
            {
                printf("111get match, %s\n", year[i].name);
                break;
            }
            else if(strcmp(months, year[i].suoxie) == 0)
            {
                printf("222get match, %s\n", year[i].name);
                break;
            }
            else if(atoi(months) == year[i].no)
            {
                printf("333get match, %s\n", year[i].name);
                break;
            }
        }
    }
    
    printf("Done.\n");
    return 0;
}
