/* ex7-12-11.c -- 最后一道题 */
#include <stdio.h>
void printchoice(void);
int main(void)
{
	const float m1p = 1.25;
	const float m2p = 0.65;
	const float m3p = 0.89;

	int m1=0, m2=0, m3=0;
	char ch;
	float bill, trans_bill, off=0.0;
	float weight;
	_Bool stop = 0;

	printchoice();
	while((ch = getchar()) != 'q')
	{
		switch(ch)
		{
			case 'a':
				printf("请输入您要购买的朝鲜菜的重量（单位：磅）:");
				scanf("%d", &m1);
				break;
			case 'b':
				printf("请输入您要购买的甜菜的重量（单位：磅）：");
				scanf("%d", &m2);
				break;
			case 'c':
				printf("请输入您要购买的胡萝卜的重量（单位：磅）：");
				scanf("%d", &m3);
				break;
		}
		if(ch != '\n')
			printf("请输入其他选项，继续输入，如果您已经购物完毕，请输入q\n");
	}
			bill = m1p * m1 + m2p * m2 + m3p * m3;
			if(bill >= 100)
				off = bill * 0.05;
			weight = m1 + m2 + m3;
			if(weight <= 5)
			{
				trans_bill = 3.5;
			}
			else if(weight < 20)
			{
				trans_bill = 10.00;
			}
			else
			{
				trans_bill = 8 + 0.1 *  weight;
			}
			printf("************************订单信息*********************************\n");
			printf("货物信息\n");
			printf("朝鲜菜(单价：$%.2f/磅)---%d磅---记$%.2f\n", m1p, m1, m1*m1p);
			printf("甜菜(单价：$%.2f/磅)  ---%d磅---记$%.2f\n", m2p, m2, m2*m2p);
			printf("胡萝卜(单价：$%.2f/磅)---%d磅---记$%.2f\n", m3p, m3, m3*m3p);
			printf("货物费用：                        $%.2f\n", bill);
			printf("折扣：                            $%.2f\n", off);
			printf("运费：                            $%.2f\n", trans_bill);
			printf("总计：                            $%.2f\n", bill-off+trans_bill);
			printf("************************多谢惠顾**********************************\n");
	return 0;					
}

void printchoice(void)
{
	printf("*******************************\n");
	printf("a)朝鲜菜\t\t\t b)甜菜\n");
	printf("c)胡萝卜\t\t\t\n");
	printf("q)退出\n");
	printf("请输入对应的字母来选择您购买的蔬菜的质量（单位：磅）\n");
}
