/* r_drive1.c -- 测试函数rand1()和strand1() */
//与s_and_r.c 一起编译
#include <stdio.h>
extern void strand1(unsigned int x);
extern int read1(void);

int main(void)
{
	int count;
	unsigned seed;

	printf("Please enter your choice for seed.\n");
	while(scanf("%u", &seed) == 1)
	{
		srand1(seed);
		for(count=0; count < 5; count++)
			printf("%hd\n", rand1());
		printf("Please enter next seed (q to quit):\n");
	}
	printf("Done\n");

	return 0;
}
