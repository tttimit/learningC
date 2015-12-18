/* ex6-16-15.c -- 计算单利和复利的增加速度 */
#include <stdio.h>
int main(void)
{
	double Daphne, Deirdre;	//名字代表余额
	int time, i;

	Daphne = Deirdre = 100.0;
	for(time = 0;   Deirdre <= Daphne; time++)
	{
		Daphne += 100 * 0.1 * time;
		for(i=0; i < time ; i++)
		{
			Deirdre *= (1 + 0.05);
		}
	}
	printf("第%d年，Deirdre的余额将超过Dephne，此时他们的余额分别为：\n"
			"Daphne: $%.2f, Deirdre: $%.2f\n", time, Daphne, Deirdre);
	return 0;
}
		
