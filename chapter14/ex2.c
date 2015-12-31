/* ex2.c -- �����ϰ2 -- ��дһ�����������û������ա��º��ꡣ�·ݿ������·ݺš�
�·������·���д��Ȼ����򷵻�һ���е��������ӣ�������һ�죩���������� */
#include <stdio.h>
#include <stdbool.h>    //�ṩ��boolean���͵�֧��
#include <stdlib.h>
#include <string.h>
#include "months.h"
bool checkyear(int);   //����Ƿ�������
int main(void)
{
    int days, years;
    char months[10];
    char mmm[2];
    int i, j, mark, totaldays;
    bool isleakyear = false;
    
    printf("Please enter the day, month, and year. Usage: 15 January 2015.\n");
    printf("month can be number, full name or abbreviation.\n");
    if(scanf("%d %s %d", &days, months, &years) == 3)
    {
        printf("your input is %d %s %d.\n", years, months, days);
        if(years < 0)
        {
            printf("year must greater than 0!\n");
            exit(1);
        }
        isleakyear = checkyear(years);
        if(days < 0)
        {
            printf("day can't be negative!\n");
            exit(1);
        }
        for(i = 0; i <= 12; i++)
        {
            if(i == 12)
            {
                printf("There is not a month matches your input.\n");
                exit(1);
            }
            if(strcmp(months, year[i].name) == 0 || strcmp(months, year[i].suoxie) == 0
                    || atoi(months) == year[i].no)
            {
//                printf("%s, %s, %d\n", year[i].name, year[i].suoxie, year[i].no);
                printf("now get a match %s.\n", year[i].name);
                switch(i+1)
                {
                    
                    case 1:
                    case 3:
                    case 5:
                    case 7:
                    case 8:
                    case 10:
                    case 12:
                        if(days > 31)
                        {
                            printf("%s doesn't have more than 31 days.\n", days);
                            exit(1);
                        }
                        break;
                    case 2:
                        if(isleakyear && days > 29)
                        {
                            printf("January in leak year doesn't have more than 29 days.\n");
                            exit(1);
                        }
                        else if(!isleakyear && days > 28)
                        {
                            printf("January in normal year doesn't have more than 28 days.\n");
                            exit(1);
                        }
                        break;
                    default:
                        if(days > 30)
                        {
                            printf("%s doesn't have more than 30 days.\n", year[i]);
                            exit(1);
                        }
                        break;
                }
                break;
            }
        }
        for(j=0; j < i; j++)
        {
            totaldays += year[j].days;
        }
        if(isleakyear && i > 2)
        {
            totaldays++;
        }
        totaldays += days;
        printf("There are %d days until %s-%d-%d.\n", totaldays, year[i].name, days, years);
    }
    else
    {
        printf("Bad input. program exit.\n");
        exit(1);
    }
    
    printf("Done. Thanks for using!\n");
    return 0;
}

bool checkyear(int year)
{
    /*  �ж����꣺
        1����ͨ������ܱ�4�����Ҳ��ܱ�100����
        2���������ܱ�400����������2000�����꣬1900���ǣ�
    */
    if(year % 400 == 0)
    {
        return true;
    }
    else if(year % 4 == 0 && year % 100 != 0)
    {
        return true;
    }
    else
        return false;
}
