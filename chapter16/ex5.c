/* ex5.c */
#include "myheader.h"
#include <time.h>
#define SIZE 10
struct ss{
	int num;
	_Bool picked;
};
void gg(int ar[], int size, int times);
int main(void)
{
	int i;
	int ar[SIZE];
	
	for(i = 0; i < SIZE; i++)
	{
		ar[i] = rand() % 1000;
	}
	printf("the original ar is: \n");
	for(i = 0; i < SIZE; i++)
	{
		printf("%d ", ar[i]);
	}
	putchar('\n');
	gg(ar, SIZE, 5);
	return 0;
}

void gg(int ar[], int size, int times)
{
	int i, pick;
	time_t ttt;

	struct ss sar[size];
	for(i = 0; i < size; i++)
	{
		sar[i].num = ar[i];
		sar[i].picked = 0;
	}
	srand(time(&ttt));
	for(i = 0; i < times; i++)
	{
		pick = rand() % size;
		if(sar[pick].picked == 0)
		{
			printf("pick %d: %d\n", pick, sar[pick].num);
			sar[pick].picked = 1;
		}
		else
		{
			printf("ar[%d] had been picked.\n", pick);
		}
	}
}
