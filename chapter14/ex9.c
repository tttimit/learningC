/* ex9.c -- 扩展练习题8，增加了一个外层菜单 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define LEN 20
struct seat{
	int seatnum;
	bool sold_status;
	bool confirmed;		//本题多了一个确认状态 
	char fname[LEN];
	char lname[LEN];
};
struct flight{
	int linenum;
	struct seat seats[12];
};
void show_top_menu(void);
void show_second_menu(int);
int main(void)
{
	char choice1, choice2;
	int seat_choice, confirm;
	char ffname[LEN], llname[LEN];
	int linenum, i, count;
	int linenum_in_arr;
	struct flight flights[4];
	struct flight temp = {
		.seats={{1,false,false},{2,false,false},{3,false,false},{4,false,false},
		{5,false,false},{6,false,false},{7,false,false},{8,false,false},
		{9,false,false},{10,false,false},{11,false,false},{12,false,false}}
	}; 
	for(i=0; i < 4; flights[i++] = temp);	
	
	printf("Welcome to Colossus Airlines tickets saling system.\n");
	printf("Please choose a particular flight or quit.\n");
	show_top_menu();
	while((scanf("%c", &choice1) == 1 && getchar() == '\n'))
	{
		switch(choice1)
		{
			case 'a':
				linenum = 102;
				break;
			case 'b':
				linenum = 311;
				break;
			case 'c':
				linenum = 444;
				break;
			case 'd':
				linenum = 519;
				break;
			case 'e':
				printf("You choose to quit. Good bye!\n");
				exit(0);
				break;
		}
		switch(linenum)
		{
			case 102:
				linenum_in_arr = 0;
				break;
			case 311:
				linenum_in_arr = 1;
				break;
			case 444:
				linenum_in_arr = 2;
				break;
			case 519:
				linenum_in_arr = 3;
				break;
		}
		show_second_menu(linenum);
		choice2: while(scanf("%c", &choice2) == 1 && getchar() == '\n')
		{
			switch(choice2)		
			{
				case 'a':
					for(i = 0, count = 0; i < 12; i++)
					{
						if(!flights[linenum_in_arr].seats[i].sold_status)
							count++;
					}
					printf("The line %d has %d empty setas.\n", linenum, count);
					break;
				case 'b':
					printf("Here is the list of empty seats.\n");
					for(i = 0, count; i < 12; i++)
					{
						if(!flights[linenum_in_arr].seats[i].sold_status)
						{
							printf("seat %d ", flights[linenum_in_arr].seats[i].seatnum);
							count++;
						}
						if((count + 1) % 4 == 0)
							putchar('\n');
					}
					break;
				case 'c':
					printf("Show the alpha...list...\n");
					break;
				case 'd':
					printf("Please pick a empty seat first, enter the seat num:\n");
	                printf("press [enter] at the start of a line to quit\n");
	                if(scanf("%d", &seat_choice) == 1 && getchar() == '\n')
	                {
//	                    printf("Now choice is %d.\n", seat_choice);
	                    seat_choice--;
	                    if(!flights[linenum_in_arr].seats[seat_choice].sold_status)
	                    {
//	                        puts("333");
	                        printf("Please enter the name of the client.\n");
	                        printf("press [enter] at the start of a line to quit\n");
	                        if(scanf("%s %s", ffname, llname) == 2 && getchar() == '\n')
	                        {
	                            flights[linenum_in_arr].seats[seat_choice].sold_status = true;
	                            strcpy(flights[linenum_in_arr].seats[seat_choice].fname, ffname);
	                            strcpy(flights[linenum_in_arr].seats[seat_choice].lname, llname);
	                            printf("Congratualations! %s %s has been assigned to"
	                                    " seat %d.\n", ffname, llname, flights[linenum_in_arr].seats[seat_choice].seatnum);
	                        }
	                        else
	                        {
	                            printf("Cannot get a valid name.\n");
	                        }
	                    }
	                    else
	                    {
	                        printf("seat %d had been sold, please pick another one.\n",
								seat_choice);
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
	                if((scanf("%d", &seat_choice)) == 1 && getchar() == '\n')
	                {
	                    seat_choice--;
	                    if(flights[linenum_in_arr].seats[seat_choice].sold_status)
	                    {
	                        flights[linenum_in_arr].seats[seat_choice].sold_status = false;
	                        strcpy(flights[linenum_in_arr].seats[seat_choice].fname, "");
	                        strcpy(flights[linenum_in_arr].seats[seat_choice].lname, "");
	                        printf("seat %d's assignment has been deleted.\n", ++seat_choice);
	                    }
	                    else
	                    {
	                        printf("seat %d has not been sold.\n", ++seat_choice);
	                    }
	                }
	                else
	                {
	                    printf("Your input is invalid, back to menu.\n");
	                }
	                break;
				case 'f':
					printf("Please choose the seat num you want to confirm.\n");
	                if((scanf("%d", &seat_choice)) == 1 && getchar() == '\n')
	                {
	                	if(linenum_in_arr].seats[seat_choice].sold_status)
	                	{
	                		printf("The seat sold to %s %s, confirm?(1)right, (2)wrong.\n");
	                		if(scanf("%d", &comfrim) == 1 && getchar() == '\n')
	                		{
	                			if(confirm == 1)
	                			{
	                				linenum_in_arr].seats[seat_choice].confirmed = true;
	                				printf("This seat is confirmed.\n");
								}
								else if(confirm == 2)
								{
									linenum_in_arr].seats[seat_choice].confirmed = false;
									printf("This seat is not confirmed.\n");
								}
							}
							else
							{
								printf("Your input is invalid.\n");
							}
						}
						else
						{
							fprintf(stderr, "This seat is empty, please check your input.\n");
						}
					}
					break;	
				case 'g':
					printf("Back to top menu.\n");
					break choice2;
			}
			show_second_menu(linenum);
		}
		show_top_menu();		
	}
}

void show_top_menu(void)
{
	puts("To choose a flight or quit, enter its letter label:");
	puts("a)Flight 102");
	puts("b)Flight 311");
	puts("c)Flight 444");
	puts("d)Flight 519");
	puts("e)Quit the system.");
}

void show_second_menu(int linenum)
{
	int num;
	
	printf("You are operating flight %d.\n", num);
	puts("To choose a function, enter its letter label:");
    puts("a)Show number of empty seats");
    puts("b)Show list of empty seats");
    puts("c)Show alphabetical list of seats");
    puts("d)Assign a customer to a seat assignment");
    puts("e)Confirm a seat assignment");
    puts("f)Delete a seat assignment");
    puts("g)Back to top menu.");
}
