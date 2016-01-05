/* ex8.c -- 巨人航空。。。写一个座位预定程序 */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define LEN 20
#define SEATNUM 12
#define FILENAME "seatdata"
void show_menu(void);
struct seat{
    int num;
    bool sold;
    char fname[LEN];
    char lname[LEN];
};
struct seat ss[SEATNUM]={
    {1,false},{2,false},{3,false},{4,false},{5,false},{6,false},{7,false},
    {8,false},{9,false},{10,false},{11,false},{12,false}
};

void save_2_file(const struct seat [], const char *);
void get_from_file(struct seat [], const char *);

int main(void)
{
    char choice;
    int i, count = 0;
    char ffname[LEN], llname[LEN];
    char fullname[LEN+LEN+1];
    
    get_from_file(ss, FILENAME);
    show_menu();
    while(scanf("%c", &choice) == 1)
    {
        if(getchar() != '\n')
            continue;
        switch(choice)
        {
            case 'a':
                for(i = 0; i < SEATNUM; i++)
                {
                    if(!ss[i].sold)
                        count++;
                }
                printf("There are %d empty seats,\n", count);
                break;
            case 'b':
                printf("Here are the list of empty seats:\n");
                for(i = 0; i < SEATNUM; i++)
                {
                    if(!ss[i].sold)
                        printf("seat %d\n", ss[i].num);
                }
                break;
            case 'c':
                printf("Here are the alphabetical list of seats:\n");
                for(i = 0; i < SEATNUM; i++)
                    printf("seat %d\n", ss[i].num);
                break;
            case 'd':
                printf("Please pick a empty seat first, enter the seat num:\n");
                printf("press [enter] at the start of a line to quit\n");
                if(scanf("%d", &choice) == 1 && getchar() == '\n')
                {
                    printf("Now choice is %d.\n", choice);
                    choice--;
                    if(!ss[choice].sold)
                    {
                        puts("333");
                        printf("Please enter the name of the client.\n");
                        printf("press [enter] at the start of a line to quit\n");
                        if(scanf("%s %s", ffname, llname) == 2 && getchar() == '\n')
                        {
                            ss[choice].sold = true;
                            strcpy(ss[choice].fname, ffname);
                            strcpy(ss[choice].lname, llname);
                            printf("Congratualations! %s %s has been assigned to"
                                    " seat %d.\n", ffname, llname, ss[choice].num);
                        }
                        else
                        {
                            printf("Cannot get a valid name.\n");
                        }
                    }
                    else
                    {
                        printf("seat %d had been sold, please pick another one.\n");
                    }
                    break;
                }
                else
                {
                    printf("Your input is invaid, back to main menu.\n");
                    break;
                }
            case 'e':
                printf("Please choose the seat num you want to delete assignment.\n");
                if((scanf("%d", &choice)) == 1 && getchar() == '\n')
                {
                    choice--;
                    if(ss[choice].sold)
                    {
                        ss[choice].sold = false;
                        strcpy(ss[choice].fname, "");
                        strcpy(ss[choice].lname, "");
                        printf("seat %d's assignment has been deleted.\n", ++choice);
                    }
                    else
                    {
                        printf("seat %d has not been sold.\n", ++choice);
                    }
                }
                else
                {
                    printf("Your input is invalid, back to menu.\n");
                }
                break;
            case 'f':
                printf("Done. Thanks for using!\n");
                save_2_file(ss, FILENAME);
                exit(0);
            default:
                save_2_file(ss, FILENAME);
                exit(1);
        }
        show_menu();
    }
    
}
void save_2_file(const struct seat ss[], const char * fname)
{
    int i;
    FILE * fptr;
    
    fptr = fopen(fname, "w");
    for(i=0; i < SEATNUM; i++)
    {
        fprintf(fptr, "%d %d %s %s\n", ss[i].num, ss[i].sold?1:0, ss[i].fname,
                ss[i].lname);
    }
    fclose(fptr);
    printf("The record has been saved to file %s.\n", fname);
}

void get_from_file(struct seat ss[], const char * fname)
{
    int i;
    int sold;
    FILE * fptr;
    
    if((fptr = fopen(fname, "r")) == NULL)
    {
        fprintf(stderr, "There is not any record.\n");
    }
    else
    {
        printf("There is old data to read.\n");
        for(i = 0; i < SEATNUM; i++)
        {
            fscanf(fptr, "%d %d", &ss[i].num, &sold);
            printf("now i: %d sold:%d\n", i, sold);
            ss[i].sold = sold==1?true:false;
            if(ss[i].sold)
            {
                fscanf(fptr, "%s %s", ss[i].fname, ss[i].lname);
            }
        }
        fclose(fptr);
        printf("Get old record finished.\n");
    }
}

void show_menu(void)
{
    puts("To choose a function, enter its letter label:");
    puts("a)Show number of empty seats");
    puts("b)Show list of empty seats");
    puts("c)Show alphabetical list of seats");
    puts("d)Assign a customer to a seat assignment");
    puts("e)Delete a seat assignment");
    puts("f)Quit");
}
