/* p_and_s.c -- ָ����ַ��� */
#include <stdio.h>
int main(void)
{
    char * mesg = "Don't be a fool!";
    char * copy;
    
    copy = mesg;
    printf("%s\n", copy);
    printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
    printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);
    return 0;
    
    /*
    Don't be a fool!
    mesg = Don't be a fool!; &mesg = 000000000022FE48; value = 0000000000404000
    copy = Don't be a fool!; &copy = 000000000022FE40; value = 0000000000404000

    ��������ĵ�һ����ַ�����Don't be a fool!
    �ڶ����ӡ����mesg��copy��2��ָ��ĵ�ַ�����Ƿֱ��������2��λ��
    ע��������ӡ����ָ���ֵ��Ҳ�������Ǵ洢Ԫ�صĵ�ַ�����Կ�����������ͬ�ġ�
    Ҳ����˵��copy = mesgִ�е�ʵ�����ǰ�mesg��ֵ���Ƹ�copy��������2��ָ��ָ���
    ��ͬһ����ַ
    
    ��������ԭ���ǣ������ڳ�����Ҫ����һ�����飬��ʱ����ָ��ֻ��Ҫһ�β��������
    ���������Ԫ�أ���ô��������������ӡ�
    
    ���⣬ͨ����������Ҫ��ֻ�е�ַ�����ȷʵ��Ҫ�ַ�������ר�ŵ�strcpy()������
    strncpy()��ִ�С�

    */
}
