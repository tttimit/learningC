//便携一个程序，把一个年龄转化为对应的天数并显示二者的值，不考虑平年和闰年
#include <stdio.h>
int main(void)
{
	int age, days;

	age = 24;
	days = 365 * age;
	printf("%d years old equals %d days.\n", age, days);
	return 0;
}
