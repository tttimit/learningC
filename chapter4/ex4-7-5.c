/* ex4-7-5.c -- 按照程序要求输出 */
#define BOOK "War and Peace"
int main(void)
{
	float cost = 12.99;
	float percent = 80.0;

	printf("This copy of \"%s\" sells for $%2.2f.\nThat is %.0f%% of list.\n", BOOK, cost, percent);
	return 0;
}
