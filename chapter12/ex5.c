/* ex5.c -- ��дһ������100��1��10��Χ�ڵ�������ĳ��򣬲��ҿ��Խ������򣨿���
��11���е������㷨�ԼӸĶ�������������������������ֱ���������򼴿ɣ���
11�µ��Ǹ��ַ��������㷨��ѡ�����򣬼����ҳ����ķ��ڵ�һ��λ�ã����ҳ��ڶ���
���ķ��ڵڶ���λ�ã����ҳ���������ڵ�����λ�á�����*/
#include <stdio.h>
#include <stdlib.h>
#define LENGTH 100
void generate100(int *);
void sort_numbers(int *);
int main(void)
{
    int arr[LENGTH];
    int i;
    
    generate100(arr);
    sort_numbers(arr);
    for(i = 0 ; i < LENGTH ; i++)
        printf("%d ", arr[i]);
    putchar('\n');
    return 0;
}

void generate100(int * arr)
{
    int i;
    
    for(i = 0; i < LENGTH; i++)
    {
        arr[i] = rand() % 10 + 1;
    }
    printf("assignment finished.\n");
}
//choose sort
void sort_numbers(int * arr)
{
    int i,j;
    int temp;

    for(i=0; i < LENGTH; i++)
        for(j=i+1; j< LENGTH; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
}
