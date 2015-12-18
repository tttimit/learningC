/* 编程题第13题 
1、用循环读入用户输入的第一个数组的8个浮点数
2、计算第二个数组中的每个值并赋值
3、上下对齐打印两个数组的结果
*/
#include <stdio.h>
int main(void)
{
	double arr1[8], arr2[8];
	int i;

	printf("请输入第一个数组的8个浮点数：\n");
	for(i=0; i<8; i++)
	{
		scanf("%lf", &arr1[i]);
	}
	
	printf("数据读入完毕。\n");
	for(i=0; i<8; i++)
	{
		if(i == 0)//果然这里我出了问题，还是用0 == i好点。。。
		{
			arr2[i] = arr1[i];
		}
		else
		{
			arr2[i] = arr2[i - 1] + arr1[i];
		}
	}

	printf("输出结果为：\n");	
	for(i=0; i<8; i++)
	{
		printf("%6.2lf ", arr1[i]);
	}
	printf("\n");
	for(i=0; i<8; i++)
	{
		printf("%6.2lf ", arr2[i]);
	}
	printf("\n");
	return 0;
}
	
