/* ex7.c -- 编写一个程序，使其拥有以下输出
Enter the number of sets: enter q to stop.
18
How many sides and how many dice?
6 3
Here are 18 sets of 3 6-sided throws.
    12 10  6  9  8 14  8 15  9 14 12 17 11  7 10
    13  8 14
How many sets? Enter q to stop.
q
*/
#include <stdio.h>
int main(void)
{
    int num;
    int i, j;
    int dice, side;

    printf("Enter the number of sets: ");
    while(scanf("%d", &num) == 1)
    {
        printf("How many sides and how many dice?\n");
        scanf("%d %d", &side, &dice);
        printf("Here are %d sets of %d %d-sided throws.\n", num, dice, side);
        for(i = 0 ; i < num; i++)
        {
            int result = 0;
            for( j = 0 ; j < dice; j++)
            {
                result += rand() % side + 1;
            }
            if(i==0)
                putchar('\t');
            else if(i == 15)
                putchar('\t');
            printf("%d ",result);
            if(i == 14)
                putchar('\n');
        }
        printf("\nEnter the number of sets: ");
    }
    
    return 0;
}


