/* pnt_add.c -- ָ��ӷ� */
#include <stdio.h> 
#define SIZE 4
int main(void)
{
    short dates [SIZE];// short�������� ������Ϊ4 
    short * pti;    //short����ָ�� 
    short index;    
    double bills[SIZE]; //double�������飬����Ϊ4 
    double * ptf;   //double����ָ�� 
    
    pti = dates;    //��dates����ĵ�ַ��ֵ��ָ�룬�൱��&dates[0] 
    ptf = bills;    //��bills����ĵ�ַ��ֵΪָ�룬�൱��&bills[0] 
     
    printf("%23s %10s\n", "short", "double");
    for(index = 0; index < SIZE; index++)
    {
        printf("pointers + %d: %#p %#p\n",index, pti + index, ptf + index);
    }
    return 0;
}
