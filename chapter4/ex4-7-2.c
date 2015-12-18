/* ex4-7-4.c -- 4.7复习题第2题 */
#include <stdio.h>
#define Q "His Hamlet was funny without being vulgar."
int main(void)
{
	printf("He sold the painting for $%2.2f.\n", 2.235e2);
	/* He sold the painting for $223.50*/
	printf("%c%c%c\n", 'H', 105, '\41');
	/*H（105对应的字符）\41 不知道，感觉应该也是一个字符*/
	printf("%s\nhas %d characters.\n", Q, strlen(Q));
	/* His Hamlet was funny without being vulgar.
	   has 43 characters.  */
	printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);
	/* Is 1.20e2 the same as 1201.00? */
	return 0;
}
/* 实际输出
He sold the painting for $223.50.
Hi!
His Hamlet was funny without being vulgar.
has 42 characters.
Is 1.20e+03 the same as 1201.00?
*/
