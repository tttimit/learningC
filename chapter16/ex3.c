/* ex3.c -- 极坐标相关 */
#include <stdio.h>
#include <math.h>
struct ji{
	double dis;
	double ang; //弧度
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
	
	printf("极坐标长度：%lf, 弧度：%lf\n", j.dis, j.ang);
	printf("直角坐标x：%ld, y: %ld\n", c.x, c.y);
	
	return 0;
}

struct cro ji2cro(struct ji j, struct cro c)
{
	c.x = j.dis * cos(j.ang);
	c.y = j.dis * sin(j.ang);
	
	return c;
}
