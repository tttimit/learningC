#include <stdio.h>
void s1(void);
void s2(void);
int main(void)
{
	s1();
	s1();
	s2();
	s1();
	s2();
	s2();
	return 0;
}

void s1(void)
{
	printf("Smile!");
}

void s2(void)
{
	printf("Smile!\n");
}
