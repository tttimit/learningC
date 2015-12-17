#include <stdio.h>
//这个程序实现输入英寸，返回对应的厘米数。
//1英寸=2.54厘米
//该练习对应page14 1.13题
int main(void)
{
    int  inches = 0;
    printf("please input the amount of inches.\n");
    scanf("%d",&inches);
    printf("Your inches equals %f cm.\n", 2.54 * inches);
    return 0;
}
