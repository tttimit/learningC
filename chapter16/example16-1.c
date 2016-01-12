/* example16-1.c -- a simple example about pre-processor */
#include <stdio.h>
#define TWO 2   //use comments if you like
#define OW "Consistency is the last refuge of the unimagina\
tive. - Oscar Wilde"   /* use \ to make this line continu to next line*/
#define FOUR TWO*TWO
#define PX printf("X is %d.\n", x)
#define FMT "X is %d.\n"

int main(void)
{
	int x = TWO;
	
	PX;
	x = FOUR;
	printf(FMT, x);
	printf("%s\n", OW);
	printf("TWO: OW\n");
	
	return 0;
}


