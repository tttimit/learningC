/* ex3.c -- ��������� */
#include <stdio.h>
#include <math.h>
struct ji{
	double dis;
	double ang; //����
};
struct cro{
	double x;
	double y;
};
struct cro ji2cro(struct ji, struct cro);
int main()
{
	struct ji j;
	struct cro c;
	
	j.dis = 2.523;
	j.ang = 0.5;
	
	ji2cro(j, c);
	
	printf("�����곤�ȣ�%lf, ���ȣ�%lf\n", j.dis, j.ang);
	printf("ֱ������x��%ld, y: %ld\n", c.x, c.y);
	
	return 0;
}

struct cro ji2cro(struct ji j, struct cro c)
{
	c.x = j.dis * cos(j.ang);
	c.y = j.dis * sin(j.ang);
	
	return c;
}
