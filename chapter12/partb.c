// partb.c -- ��������ಿ��
#include <stdio.h>

extern int count;   //����һ���ⲿ����

static int total = 0;   //��̬�洢ʱ�ڣ��ڲ����ӣ��ļ�������
void accumulate(int k);
void accumulate(int k)
{
    static int subtotal = 0;    //��̬�洢ʱ�ڣ������ӣ������������
    
    if(k <= 0)
    {
        printf("loop cycle: \n", count);
        printf("subtotal: %d; total: %d\n", subtotal, total);
        subtotal = 0;
    }
    else
    {
        subtotal += k;
        total += k;
    }
}
