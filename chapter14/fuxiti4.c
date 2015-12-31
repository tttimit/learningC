/* fuxiti4.c -- ¸´Ï°ÌâµÚ4Ìâ*/
#include <stdio.h>
#include <stdlib.h>

struct month{
    char mname[30];
    char suoxie[3];
    int days;
    int No;
};
void printall(struct month);
int main(void)
{
    struct month year[12];
    struct month amonth;
    int i;
    
    for(i = 0; i < 12; i++)
    {
        amonth = year[i];
        amonth.No = i + 1;
        
        switch(i)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                amonth.days = 31;
                break;
            case 2:
                amonth.days = 28;
            default:
                amonth.days = 30;
        }
        switch(i)
        {
            case 1:
//                sscanf(amonth.mname, "January");
                amonth.mname = "January";
                amonth.suoxie = "Jan.";
                break;
            case 2:
                amonth.mname = "February";
                amonth.suoxie = "Feb.";
                break;
            case 3:
                amonth.mname = "March";
                amonth.suoxie = "Mar.";
                break;
            case 4:
                amonth.mname = "April";
                amonth.suoxie = "Apr.";
                break;
            case 5:
                amonth.mname = "May";
                amonth.suoxie = "May.";
                break;
            case 6:
                amonth.mname = "June";
                amonth.suoxie = "Jun.";
                break;
            case 7:
                amonth.mname = "July";
                amonth.suoxie = "Jul.";
                break;
            case 8:
                amonth.mname = "August";
                amonth.suoxie = "Aug.";
                break;
            case 9:
                amonth.mname = "September";
                amonth.suoxie = "Sep.";
                break;
            case 10:
                amonth.mname = "October";
                amonth.suoxie = "Oct.";
                break;
            case 11:
                amonth.mname = "November";
                amonth.suoxie = "Nov";
                break;
            case 12:
                amonth.mname = "December";
                amonth.suoxie = "Dec";
                break;
        }
    }
    
    printall(year);
    
    return 0;
}

void printall(struct month year)
{
    int i;
    
    for(i=0; i < 12; i++)
    {
        printf("%s %s %d %d\n", year[i].mname, year[i].suoxie, year[i].days,
                    year[i].No);
    }
}
