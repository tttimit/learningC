/* mall.c -- ʹ��Queue�ӿ� */
/* ��queue.cһ����� */
#include <stdio.h>
#include <stdlib.h>         //rand() srand()
#include <time.h>           //time()
#include "queue.h"          //�ı�Item��typedef
#define MIN_PER_HR 60.0

bool newcustomer(double x);    //���¹˿�����
Item customertime(long when);   //���ù˿Ͳ���

int main(void)
{
	Queue line1, line2;        
	Item temp, temp1, temp2;          //�����¹˿͵�����
	int hours;          //ģ���Сʱ��
	int perhour;       	//ÿСʱ�˿͵�ƽ����
    double min_per_cust;    //�˿͵�����ƽ�����ʱ�䣬Ҳ����ƽ���೤ʱ�������˿�
	long cycle, cyclelimit; //ѭ�������������������Ͻ�
	long turnaways = 0;     //��������������ܾ��Ĺ˿�����������̯λ�����ܷ���ʱ�Ż�ܾ�
	long customers1 = 0, customers2 = 0;     //��������еĹ˿�������̯λ
	long served1 = 0, served2 = 0;        //��ģ���ڼ�õ�����Ĺ˿���
	long sum_line1 = 0, sum_line2 = 0;      //��ĿǰΪֹ���е��ۼ��ܳ���������������ƽ�����г���
	int wait_time1 = 0, wait_time2 = 0;      //�����õ�ǰ�˿Ͳ�����ѯ���
	long line_wait1 = 0, line_wait2 = 0;     //�����ۼƵȴ�ʱ�䣬������������ÿ�����е�ƽ���ȴ�ʱ��
	
	InitializeQueue(&line1);
    InitializeQueue(&line2);
	srand((unsigned int)time(0));         //�����ʼ��rand()����
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
                temp = customertime(cycle); //���ݵ�ǰʱ��������������ѯʱ�乹��һ����Ŀ
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
		if(wait_time1 <= 0 && !QueueIsEmpty(&line1))//��ѯʦ�����Ҷ��зǿ�
		{
			DeQueue(&temp1, &line1);
			wait_time1 = temp1.processtime;
			line_wait1 += cycle - temp1.arrive;
			served1++;
		}
        if(wait_time2 <= 0 && !QueueIsEmpty(&line2))//��ѯʦ�����Ҷ��зǿ�
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

/* x�ǹ˿͵�����ƽ�����ʱ�䣨����ƣ�
    �����1�������й˿͵������򷵻�true */
bool newcustomer(double x)
{
	if(rand() * x / RAND_MAX < 1)
		return true;
	else
		return false;
}

/* when�ǹ˿͵�����ʱ��
    ��������һ��Item�ṹ���ýṹ�Ĺ˿͵���ʱ������Ϊwhen
    ��Ҫ����ѯʱ������δһ����Χ��1��3֮������ֵ  */
Item customertime(long when)
{
	Item cust;
	
	cust.processtime = rand() % 3 + 1;
	cust.arrive = when;
	
	return cust;
}
