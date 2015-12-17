/* coladays.c -- 求出温度低于零度的天数的百分率 */
#include <stdio.h>
int main(void)
{
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;

	printf("Enter the list of daliy low temperatures.\n");
	printf("Use Celsius, and enter q to quit.\n");
	while(scanf("%f", &temperature) == 1)
	{
		all_days++;
		if(temperature < FREEZING)
			cold_days++;
	}
	if(0 != all_days)
		printf("%d days total: %.1f%% were below freezing.\n",
				all_days, 100.0 * (float)cold_days / all_days);
	if(all_days == 0)
		printf("No date entered!\n");
	return 0;
}
