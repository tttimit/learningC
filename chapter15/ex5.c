/* ex5.c -- ��дһ���������ú�����һ��unsigned int ������λ������תָ��������λ��
���磬rotate_1(x, 4)��x������λ�����ƶ�4��λ�ã����Ҵ���˶�ʧ��λ�����³�������
�ˡ�Ҳ����˵����Ѹ�λ�Ƴ���λ�����λ���ڳ����в��Ըú����� */
#include <stdio.h>
unsigned int rotate_1(unsigned int, int);
int pp(int, int);
int main(void)
{
	unsigned int num;
	int count;
	
	printf("Please enter a num.\n");
	scanf("%u", &num);
	printf("Please enter the count.\n");
	scanf("%d", &count);

	printf("The original num is: %u\n", num);
	printf("After rotate, the number is %u\n", rotate_1(num, count));
	
	return 0;
}

unsigned int rotate_1(unsigned int num, int count)
{
	int i = 0, j = 0;
	int value = 0;
	static int arr_r[32], arr_t[32];
	int cc = 0;
	int temp_num = num;
	
	i = 0;
	while(temp_num != 0)
	{
		arr_r[i++] = temp_num % 2;
		temp_num /= 2;
	}
	
//	printf("num to binary arr(reverse): \n");
	for(i = 31; i >= 0; i--)
	{
		arr_t[i] = arr_r[31 - i];
//		printf("%d ", arr_t[31 - i]);
	}
	
//	putchar('\n');
	for(i = count - 1; i >= 0; i--, j++)
	{
		if(arr_t[i] == 1)
		{
			value += pp(2, j);
//			printf("now, arr_t[%d] is %d, value is %d\n", i, pp(2, j), value);
		}
	}
//	printf("now wait to add value is: %d\n", value);

	num = num << count;
	num += value;
	
	return num;
}

int pp(int base, int times)
{
	int i, result;

	for(i = 0, result = 1; i < times; i++)
	{
		result *= base;
	}
	
	return result;
}
