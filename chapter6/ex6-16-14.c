/* ex6-16-14.c -- 读入一行输入，然后反向打印。假定一行最长为255个字符*/
/*这道题的感悟是，我们在输入了一行字符串后，会按下回车，也就是'\n'，
此时程序也会读入'\n'，所以我们判断一行是否读取完了，要根据'\n'来
判断*/
#include <stdio.h>
int main(void)
{
	char arr[255];
	int res, i;

	printf("请输入字符串：\n");
	i = 0;
	res = scanf("%c", &arr[i]);
	while(res != 0 && arr[i] != '\n')
	{
		res = scanf("%c", &arr[++i]);
	}
	printf("读取输入完毕！\n反向输出为：");
	for(; i >= 0; i--)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
	return 0;
}
