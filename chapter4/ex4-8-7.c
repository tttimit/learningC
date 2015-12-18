/* ex4-8-7.c 根据输入的汽车行驶举例和耗油量来显示一些东西 */
#include <stdio.h>
#define GL2L 3.785
#define MILE2KM 1.609
int main(void)
{
	float distance_mile, gas_garlen;
	float distance_km, gas_l;	


	printf("Please enter the distance and gas consumation.\n");
	scanf("%f %f\n", &distance_mile, &gas_garlen);
	printf("So you can drive %.1f miles per galen gas.\n", distance_mile / gas_garlen);
	distance_km = MILE2KM * distance_mile;
	gas_l = GL2L * gas_garlen;
	printf("So you can dirve %.1f km per l gas.\n", distance_km / gas_l * 100);
	return 0;
}
