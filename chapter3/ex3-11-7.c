/* 接受一个身高的厘米数，返回对应的英寸数 */
#include <stdio.h>
int main(void)
{
	float height;

	printf("enter the height:");
	scanf("%f", &height);
	printf("%f cm equals %f inch\n", height, height / 2.54);
	return 0;
}
