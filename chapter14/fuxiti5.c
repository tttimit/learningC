/* fuxiti5.c -- 编写一个函数。当给出月份号后，程序返回一年中到该月为止（包括该月）
总共的天数。假定在外部声明了第2题中的结构模版和一个该结构的数组。 */
#include <stdio.h>
#include <stdlib.h>
struct month{
        char mname[10];
        char suoxie[3];
        int counts;
        int number;
    };
    
int main(void)
{
    struct month months[12] =
    {
        {"January", "Jan", 31, 1},
        {"February", "Feb", 28, 2},
        {"March", "Mar", 31, 3},
        {"April", "Apr", 30, 4},
        {"May", "may", 31, 5},
        {"June", "Jun", 30, 6},
        {"July", "Jul", 31, 7},
        {"August", "Aug", 31, 8},
        {"September", "Sep", 30, 9},
        {"October", "Oct", 31, 10},
        {"November", "Nov", 30, 11},
        {"December", "Dec", 31, 12}
    };
    
    int choice;
    int total;
    
    printf("Please enter the month number of a month (negative number to quit): ");
    while(scanf("%d", &choice) == 1)
    {
        if(choice < 0)
        {
            printf("you enter %d, thanks for using.\n", choice);
            exit(0);
        }
        else if(choice > 12)
        {
            printf("you enter %d, there is not a month matches your input.\n", choice);
            exit(0);
        }
        total = 0;
        int i;
//        printf("111\n");
        for(i= 0; i < choice; i++)
        {
//             printf("111+ %d\n", i);
            total += months[i].counts;
        }
        printf("There are totally %d days until %s.\n", total, months[choice-1].mname);
        printf("Please enter the number of a month (negative number to quit): ");
    }
    printf("You enter non-digits, program exit.\n");
    return 1;
}
