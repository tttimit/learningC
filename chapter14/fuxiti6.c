/* fuxiti6.c -- ��struct��ֵ���ʼ�� */
#include <stdio.h>
#include <string.h>
typedef struct lens{ //��ͷ����
    float foclen;   //���೤�ȣ���mmΪ��λ
    float fstop;    //�׾�
    char brand[30]; //Ʒ������
} LENS;

void a(void);
void b(void);

int main(void)
{
   
    a(); //ʹ�ø�����Ա��ֵ
    puts("-----");
    b(); //ʹ��ָ����ʼ����Ŀ�б�
    
    return 0;
}

void a(void)
{
    LENS len[10];
    
    len[2].foclen = 500;
    len[2].fstop = 2.0;
    strcpy(len[2].brand, "Remarkatar");
    
    printf("���೤��Ϊ%.fmm���׾�Ϊf/%.1f��%s��ͷ\n", len[2].foclen,
            len[2].fstop, len[2].brand);
}

void b(void)
{
    LENS len[10] = {{},{},{500, 2.0, "Remarkatar"}};
    
    printf("���೤��Ϊ%.fmm���׾�Ϊf/%.1f��%s��ͷ\n", len[2].foclen,
            len[2].fstop, len[2].brand);
    
}

