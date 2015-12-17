/* ex7-12-8.c -- 为上一题的工资计算添加4个工资等级，并让用户选择*/
#include <stdio.h>
#define SALARY_PER_HOUR salary	//每小时薪水
#define OVERTIME 1.5	//加班时间折算小时数（超过40小时的才算加班时间）
#define TAX1 0.15	//300元以下税率
#define TAX2 0.20	//300到450的税率
#define TAX3 0.25	//450以上的税率
#define BASE1 300 * TAX1 	//300元内的税金
#define BASE2 BASE1 + 150 * TAX2 //450元内的税金
int main(void)
{
	int worktime, choice;
	float total_salary = 0, tax = 0, net_salary = 0, salary;
	_Bool stop = 0;
	
	printf("*****************************************************\n");
	printf("1) $8.73/hr\t\t\t2) $9.33/hr\n");
	printf("3) $10.00/hr\t\t\t4) $11.20/hr\n");
	printf("5) quit\n");
	printf("*****************************************************\n");
	printf("请输入工资等级：");
	scanf("%d", &choice);
	while( choice != 5)
	{	
		switch(choice)
		{
			case 1:
				salary = 8.73;
				break;
			case 2:
				salary = 9.33;
				break;
			case 3:
				salary = 10.00;
				break;
			case 4:
				salary = 11.20;
				break;
			case 5:
				stop = 1;
				break;
			default:
				printf("请按照提示输入数字。\n");
				stop = 1;
		}
		if(!stop)
		{
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
		}		
		printf("*****************************************************\n");
		printf("1) $8.73/hr\t\t\t2) $9.33/hr\n");
		printf("3) $10.00/hr\t\t\t3) $11.20/hr\n");
		printf("5) quit\n");
		printf("*****************************************************\n");
		printf("请输入工资等级：");
		scanf("%d", &choice);
	}
	return 0;																											

}	
