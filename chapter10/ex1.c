/* ex1.c -- 针对若干年的降水量数据，计算年降水量、年降水平均量、以及月降水平均量*/
#include <stdio.h>
#define YEARS 5
#define MONTHS 12
int main(void)
{
    int i, j;
    float rainfall;
    float (* ptr)[MONTHS];  //指向数组的指针
    
    const float rain[YEARS][MONTHS] = {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };
    
    ptr = rain;
    //rain_ever_year
    printf("YEAR   RAINFALL(inches)\n");
    for(i=0; i < YEARS; i++)
    {
        rainfall = 0;
        for(j=0; j < MONTHS; j++)
        {
            rainfall += *(*(ptr + i) + j);
        }
        printf("%d       %.1f\n", 2000+i, rainfall);
    }
    
    //rain_average_year(rain, YEARS, MONTHS);
    for(i=0, rainfall = 0; i<YEARS; i++)
    {
        for(j=0; j < MONTHS; j++)
        {
            rainfall += *(*(ptr + i) + j);
        }
    }
    printf("\nThe yearly average is %.1f inches.", rainfall/5);
   // rain_average_month(rain, YEARS, MONTHS);
   
    printf("\nMONTHLY AVERAGES:\n");
    printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
    for(i=0; i< MONTHS; i++)
    {
        rainfall = 0;
        for(j=0; j< YEARS ; j++)
        {
            rainfall += *(*(ptr+j)+i);
        }
        printf("%.1f ", rainfall/5);
    }
    return 0;
}

