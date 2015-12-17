/* ex10.c -- 重写ex9.c，但是不使用continue或者goto*/
/*
q
Setp 1
Step 2
Step 3
c
Setp 1
g
Setp 1
Step 3
b
Setp 1
Done
*/
#include <stdio.h>
int main(void)
{
    char ch;
    
    while((ch=getchar()) != '#')
    {
        if(ch == '\n')
        {
        }
        else
        {
            printf("Step 1\n");
            if(ch == 'c'){
            }
            else
            {
                if(ch == 'b')
                {
                    break;
                }
                else if(ch == 'g')
                {
                    printf("Step 3\n");
                }
                else
                {
                    printf("Step 2\n");
                    printf("Step 3\n");
                }
            }
        }
    }
    printf("Done\n");
} 
