// rand0.c -- ���������
// ʹ��ANSI C�Ŀ���ֲ�㷨
static unsigned long int next = 1; //���ӣ�����һ���ļ��������ڲ����ӣ���̬�洢�����
int rand0(void)
{
    //����α�������ħ����Ĺ�ʽ
    next = next * 1103515245 + 12345;
    return (unsigned int)(next/65535) % 32768;
}
