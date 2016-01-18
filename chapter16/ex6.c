/* ex6.c -- 修改程序清单16.15，使用struct names 元素组成的数组，而不是使用double
数组。使用较少元素并显式初始化数组为由合适名字组成的数组 */
#include <stdio.h>

struct names{
	char first[40];
	char last[40];
};

int mycomp(const void * p1, const void * p2);
void showarr(const struct names [], int);
int main(void)
{
	struct names nn[5] = {
		{"John", "Watson"}, {"Sherlock", "Holmes"}, {"Mycroft", "Holmes"},
		{"Mary", "Watson"}, {"Molly", "Hoolper"}
	};
	
	printf("The origianl arr is:\n");
	showarr(nn, 5);
	qsort(nn, 5, 80 * sizeof(char), mycomp);
	printf("----------\nAfter sorting, arr is:\n");
	showarr(nn, 5);
	
	return 0;
}

int mycomp(const void * p1,  const void * p2)
{
	struct names * n1 = (struct names *)p1;
	struct names * n2 = (struct names *)p2;

	if(strcmp(n1->first, n2->first) > 0)
	{
		return 1;
	}
	else if (strcmp(n1->first, n2->first) == 0)
	{
		if(strcmp(n1->last, n2->last) > 0)
		{
			return 1;
		}
		else if(strcmp(n1->last, n2->last) == 0)
		{
			return 0;
		}
		else
			return -1;
	}
	else
		return -1;

}

void showarr(const struct names ptr[], int len)
{
	int i;
	
	for(i = 0; i < len; i++)
	{
		printf("%s %s\n", (ptr+i)->first, (ptr+i)->last);
	}
}

