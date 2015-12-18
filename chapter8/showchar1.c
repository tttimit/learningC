/* showchar1.c -- 带有一个较大的I/O问题的程序 */
#include <stdio.h>
void display(char ch, int liines, int width);
int main(void)
{
	int ch; //ch定义为int类型是为了方便进行EOF检测
	int rows, cols;
	printf("Enter a character and two integers:\n");
	while((ch = getchar()) != '\n')
	{
		scanf("%d %d", &rows, &cols);
		display(ch, rows, cols);
		printf("Enter another character and two integers:\n");
		printf("Enter a new line to quit.\n");
	}
	printf("Bye.\n");
	return 0;
}

void display(char ch, int lines, int width)
{
	int row, col;

	for(row = 1; row <= lines; row++)
	{
		for(col = 1; col <= width; col++)
			putchar(ch);
		putchar('\n');
	}
}
