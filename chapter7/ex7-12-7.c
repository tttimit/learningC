/* ex7-12-7.c -- 输入一周中的工作小时数，打印出工资总额，税金
以及净工资*/
#include <stdio.h>
#define SALARY_PER_HOUR 10.00	//每小时薪水
#define OVERTIME 1.5	//加班时间折算小时数（超过40小时的才算加班时间）
#define TAX1 0.15	//300元以下税率
#define TAX2 0.20	//300到450的税率
#define TAX3 0.25	//450以上的税率
#define BASE1 300 * TAX1 	//300元内的税金
#define BASE2 BASE1 + 150 * TAX2 //450元内的税金
int main(void)
{
	int worktime;
	float total_salary = 0, tax = 0, net_salary = 0;

	printf("请输入工作时间：\n");
	scanf("%d", &worktime);
	if(worktime <= 40)
	{
		total_salary = SALARY_PER_HOUR * worktime;
	}
	else
	{
	total_salary = SALARY_PER_HOUR * (40 + OVERTIME * ( worktime - 40));
	}
	if(total_salary <= 300)
	{
		tax = TAX1 * total_salary;
		net_salary = total_salary - tax;
	}
	else if(total_salary <= 450)
	{
		tax = BASE1 + TAX2 * (total_salary - 300);
		net_salary = total_salary - tax;
	}
	else
	{
		tax = BASE2 + TAX3 * (total_salary - 450);
		net_salary = total_salary - tax;
	}
	printf("您本周工作时间为%d，工资总额为%.2f，税金为%.2f，净工资为%.2f。\n",
			worktime, total_salary, tax, net_salary);
	return 0;
}
