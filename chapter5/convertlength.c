/* convertlength.c -- 进行厘米英寸英尺的转换
	1 英寸 = 2.54 厘米
	1 英尺 = 12 英寸  */
#include <stdio.h>
const double CM_PER_INCH = 2.54;
const int INCHS_PER_FEET = 12;
int main(void)
{
	float len_cm, len_inch;
	int len_feet;

	printf("Enter a height in centimeters: ");
	scanf("%f", &len_cm);
	while(len_cm > 0)
	{
		len_inch = len_cm / CM_PER_INCH;
		len_feet = len_inch / INCHS_PER_FEET;
		len_inch = len_inch - INCHS_PER_FEET * len_feet;
		printf("%.1f cm = %d feet, %.1f inches\n", len_cm, len_feet, len_inch);
		printf("Enter a height in centimeters(<=0 to quit): ");
		scanf("%f", &len_cm);
	}
	printf("bye\n");
	return 0;
}
