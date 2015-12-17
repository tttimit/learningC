/* pnt_add.c -- 指针加法 */
#include <stdio.h> 
#define SIZE 4
int main(void)
{
    short dates [SIZE];// short类型数组 ，长度为4 
    short * pti;    //short类型指针 
    short index;    
    double bills[SIZE]; //double类型数组，长度为4 
    double * ptf;   //double类型指针 
    
    pti = dates;    //把dates数组的地址赋值给指针，相当于&dates[0] 
    ptf = bills;    //把bills数组的地址赋值为指针，相当于&bills[0] 
     
    printf("%23s %10s\n", "short", "double");
    for(index = 0; index < SIZE; index++)
    {
        printf("pointers + %d: %#p %#p\n",index, pti + index, ptf + index);
    }
    return 0;
}
