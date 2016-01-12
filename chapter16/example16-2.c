/* example16-2.c -- 带有参数的宏 */
#include <stdio.h>
#define SQUARE(X) ((X)*(X))
#define PR(X) printf("The result is %d.\n", X)
int main(void)
{
	int x = 4;
	int z;
	
	printf("X = %d\n", x);
	z = SQUARE(x);
	printf("Evaluating SQUARE(x): ");
	PR(z);
	z = SQUARE(2);
	printf("Evaluating SQUARE(2): ");
	PR(z);
	printf("Evaluating Square(x + 2): ");
	PR(SQUARE(x+2));
	printf("Evaluating 100/SQUARE(2): ");
	PR(100/SQUARE(2));
	printf("X is %d.\n", x);
	printf("Evaluating SQUARE(++x): ");
	PR(SQUARE(++x));
	printf("After incrementing, x is %x.\n", x);
	
	return 0;
}


