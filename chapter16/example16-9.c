/* example16-9.c -- ifdef.c -- ʹ���������� */
#include <stdio.h>
#define JUST_CHECKING
#define LIMIT 4

int main(void)
{
	int i;
	int total = 0;

	for(i = 1; i <= LIMIT; i++)
	{
		if(i > 1)
		total += 2 * i * i + 1;
#ifdef JUST_CHECKING
		printf("i = %d, running total = %d\n", i, total);
#endif
	}
	printf("Grand total = %d\n", total);
	
	return 0;
}




