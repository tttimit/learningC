#include <stdio.h>
int main(void)
{
	int a, b;

	a = 5;
 	b = 2;//line 7
	b = a;//line 8
 	a = b;//line 9
	printf("%d %d\n", b, a);
	return 0;
}
/*
第7行之后，b = 2
第8行之后，b = 5
第9行之后，a = 5
*/
