/* parta.c -- ���ִ洢�� */
#include <stdio.h>
void report_count();
void accumulate(int k);
int count = 0;  //��̬�洢ʱ�ڣ��ⲿ���ӣ��ļ�������
int main(void)
{
    int value;  //�Զ��洢ʱ�ڣ������ӣ������������
    register int i; //�Զ��洢ʱ�ڣ������ӣ� �����������
    
    printf("Enter a positive integer(0 to quit):");
    while(scanf("%d", &value) == 1 && value > 0)
    {
        ++count;
        for(i=value; i >= 0; i--)
            accumulate(i);
        printf("Enter a positive integer(0 to quit):");
    }
    report_count();
    return 0;
}

void report_count()
{
    printf("Loop executed %d times\n", count);
}
