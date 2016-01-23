/* mall.c -- 使用Queue接口 */
/* 与queue.c一起编译 */
#include <stdio.h>
#include <stdlib.h>         //rand() srand()
#include <time.h>           //time()
#include "queue.h"          //改变Item的typedef
#define MIN_PER_HR 60.0

bool newcustomer(double x);    //有新顾客来吗
Item customertime(long when);   //设置顾客参量

int main(void)
{
	Queue line1, line2;        
	Item temp, temp1, temp2;          //关于新顾客的数据
	int hours;          //模拟的小时数
	int perhour;       	//每小时顾客的平均数
    double min_per_cust;    //顾客到来的平均间隔时间，也就是平均多长时间来个顾客
	long cycle, cyclelimit; //循环计数器，计数器的上界
	long turnaways = 0;     //因队列已满而被拒绝的顾客数，当两个摊位都不能服务时才会拒绝
	long customers1 = 0, customers2 = 0;     //被加入队列的顾客数，分摊位
	long served1 = 0, served2 = 0;        //在模拟期间得到服务的顾客数
	long sum_line1 = 0, sum_line2 = 0;      //到目前为止队列的累计总长，后面用来计算平均队列长度
	int wait_time1 = 0, wait_time2 = 0;      //还需多久当前顾客才能咨询完毕
	long line_wait1 = 0, line_wait2 = 0;     //队列累计等待时间，后面用来计算每个队列的平均等待时间
	
	InitializeQueue(&line1);
    InitializeQueue(&line2);
	srand((unsigned int)time(0));         //随机初始化rand()函数
	puts("Case Study: Sigmund Lander's Advice Booth");
	puts("Enter the number of simulation hours: ");
	scanf("%d", &hours);
	cyclelimit = MIN_PER_HR * hours;
	puts("Enter the average number of customers per hour: ");
	scanf("%d", &perhour);
	min_per_cust = MIN_PER_HR / perhour;
	
	for(cycle = 0; cycle < cyclelimit; cycle++)
	{
		if(newcustomer(min_per_cust))
		{
//			if(QueueIsFull(&line1) && QueueIsFull(&line2))
			if(line1.items==10 && line2.items==10)
				turnaways++;
			else
			{
                temp = customertime(cycle); //根据当前时间和随机产生的咨询时间构造一个条目
                if(line1.items <= line2.items)
                {
                	printf("now line1 has %d customers, add 1.\n", line1.items);
                    customers1++;
                    EnQueue(temp, &line1);
                }    
                else
                {
                	printf("now line2 has %d customers, add 1.\n", line2.items);
                    customers2++;
                    EnQueue(temp, &line2);
                }    			
			}
		}
		if(wait_time1 <= 0 && !QueueIsEmpty(&line1))//咨询师空闲且队列非空
		{
			DeQueue(&temp1, &line1);
			wait_time1 = temp1.processtime;
			line_wait1 += cycle - temp1.arrive;
			served1++;
		}
        if(wait_time2 <= 0 && !QueueIsEmpty(&line2))//咨询师空闲且队列非空
		{
			DeQueue(&temp2, &line1);
			wait_time2 = temp2.processtime;
			line_wait2 += cycle - temp2.arrive;
			served2++;
		}
		if(wait_time1 > 0)
			wait_time1--;
        if(wait_time2 > 0)
            wait_time2--;
		sum_line1 += QueueItemCount(&line1);
        sum_line2 += QueueItemCount(&line2);
	}
	
	if((customers1 + customers2) > 0)
	{
		printf("customers accepted: table1: %ld, table2: %ld\n",
                     customers1, customers2);
                    
		printf("customers served:table1: %ld, table2:%ld\n",
                     served1, served2);
                    
		printf("turnaways: %ld\n", turnaways);
		
		printf("average queue size:table1: %.2f, table2: %.2lf\n", 
                (double)sum_line1/ cyclelimit, (double)sum_line2 / cyclelimit);
                        
		printf(" average wait time: table1: %.2f, table2: %.2f\n",
                (double)line_wait1/served1, (double)line_wait2/served2);
	}
	else
		puts("No customers!");
	EmptyTheQueue(&line1);
    EmptyTheQueue(&line2);
	puts("Bye!");
	
	return 0;
}

/* x是顾客到来的平均间隔时间（以秒计）
    如果这1分钟内有顾客到来，则返回true */
bool newcustomer(double x)
{
	if(rand() * x / RAND_MAX < 1)
		return true;
	else
		return false;
}

/* when是顾客到来的时间
    函数返回一个Item结构，该结构的顾客到来时间设置为when
    需要的咨询时间设置未一个范围在1到3之间的随机值  */
Item customertime(long when)
{
	Item cust;
	
	cust.processtime = rand() % 3 + 1;
	cust.arrive = when;
	
	return cust;
}
