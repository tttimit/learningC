/* ex4.c 时间相关，不理解题目要我做什么。。。 */
#include <stdio.h>
#include <time.h>
void passtime(double);
int main(void)
{
	double dd;
	
	printf("Enter a amount of time: ");
	scanf("%lf", &dd);
	printf("started!, %lf\n", clock());
	passtime(dd);
	printf("Done, %lf\n", clock());
	
	return 0;
}

void passtime(double d)
{
	clock_t t;
	double b;
	
	do{
		t = clock();
		b = CLOCKS_PER_SEC/(double)t;
	}while(b < d);
	
}
