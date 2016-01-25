/* ex6.c -- exercise 6 -- 写一个接受3个参数的函数。这3个参数为：存有已排序的数组
名，数组元素个数和要查找的整数。如果该整数在数组中，函数返回1；否则返回0。函数用
折半搜索法实现。 */
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 20
int IsInArray(int [], int, int);
int MyCompare(const void *, const void *);
void ShowArr(int [], int);
int main(void)
{
	int arr[MAXSIZE], i, size;

	srand(time(0));
	for(i=0; i < MAXSIZE; i++)
	{
		arr[i] = rand() % 100 + 1;
	}
	size = MAXSIZE;
	qsort(arr, size, sizeof(int), MyCompare);
	ShowArr(arr, size);
	printf("Enter the number you want to search (1-100)\n");
	scanf("%d", &i);
	printf("You want to search %d.\n", i);
	if(IsInArray(arr, size, i) == 1)
		printf("Found %d in array!\n", i);
	else
		printf("Sorry, cannot find %d in array.\n", i);
		
	return 0;
}

int IsInArray(int * arr, int size, int target)
{
	int start, end, middle;
	
	start = 0;
	end = size - 1;
	while(start <= end)
	{
		middle = (start + end) / 2;
		if(target == arr[middle])
			return 1;
		else if(target < arr[middle])
		{
			end = middle - 1;
		}
		else
		{
			start = middle + 1;
		}
	}
	return 0;
}

int MyCompare(const void * v1, const void * v2)
{
	int * p1 = (int *)v1;
	int * p2 = (int *)v2;
	if(*p1 < *p2)
		return -1;
	else if(*p1 == *p2)
		return 0;
	else
		return 1;
}

void ShowArr(int * arr, int size)
{
	int i;
	
	printf("the arr is: \n");
	for(i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
		if(i != 0 && i % 10 == 0)
			putchar('\n');
	}
}

