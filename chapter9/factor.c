/* factor.c -- ʹ��ѭ����β�ݹ����׳� */
#include <stdio.h> 
long fact1(int num); //ʹ��ѭ������׳� 
long fact2(int num); //ʹ��β�ݹ����׳� 
int main(void)
{
    int num;    
    
    printf("������Ҫ����׳˵�����");
    scanf("%d", &num);
    printf("ѭ��������Ľ׳˽��Ϊ��%ld\n", fact1(num));
    printf("β�ݹ������Ľ׳˽��Ϊ��%ld\n", fact2(num));
    return 0;
}

long fact1(int num)
{
    unsigned int i;
    long result = 1;
    
    for(i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

long fact2(int num)
{
    long ans;
    
    if(num > 0)
        ans = num * fact2(num - 1);
    else
        ans = 1;
    return ans;
}
