/* example16-18.c -- varargs.c -- 使用可变数量的参数 */
#include <stdio.h>
#include <stdarg.h>
double sum(int, ...);
int main(void)
{
	double s, t;
	
	s = sum(3, 1.1, 2.5, 13.3);
	t = sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1);
	printf("return value for "
		"sum(3, 1.1, 2.5, 13.3): %g\n", s);
	printf("return value for "
		"sum(6, 1.1, 2.1, 13.1, 4.1, 5.1 6.1): %g\n", t);
		
	return 0;
}

double sum(int lim, ...)    //lim代表了可变参数的数量
{
	va_list ap;     //声明用于存放参数的变量
	double tot = 0;
	int i;
	va_start(ap, lim);  //此宏将参数列表复制到变量ap中，lim是参数个数
	for(i = 0; i < lim; i++)
		tot += va_arg(ap, double);  //第一个参数为参数列表，第二个是类型，
									//第一次调用返回列表第一个元素，以此类推
	va_end(ap);
	return tot;
}



