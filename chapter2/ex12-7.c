#include <stdio.h>
void one_three(void);
void two(void);
int main(void)
{
	printf("String now:\n");
	one_three();
	printf("done!\n");
	return 0;
}

void two(void)
{
	printf("two\n");
}

void one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
}
