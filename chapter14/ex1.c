/* ex1.c -- �����ϰ1 -- ������ϰ��5����ʹ���·�����ƴд�����·ݺ�(�����˿���ʹ
��strcmp())�� ������ϰ��3�����һ���ṹģ�棬����һ���·�����һ��3����ĸ�ĸ��·�
����д�����µ��������Լ��·ݺ� ������ϰ��5.��дһ���������������·ݺź󣬳���
��һ���е�����Ϊֹ���������£��ܹ����������ٶ����ⲿ�����˵�2���еĽṹģ�����
һ���ýṹ�����顣*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "months.h" //�ṩ�ṹ�������

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
