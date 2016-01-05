/* ex6.c -- ��ɱȽϳ����Ͳ�д�ˣ������˼�Ƕ�ȡһ���ı��ļ�����ȡһ�������˶�Ա
��һЩ������Ϣ��Ȼ�����һЩ���ʣ�����ʾ��� */
#include <stdio.h>
#include <stdlib.h>
#define LEN 20
#define ARRLEN 18
#define MAXLEN 81
#define FNAME "baseball_team"

struct data{
    char fname[LEN];
    char lname[LEN];
    int play_times;     //�ϳ�����
    int hit_times;      //������
    int zoulei_times;   //������
    int paodian_times;  //�ܵ���
    float rate;         //����ƽ���ɹ���
};

struct data d[ARRLEN];

int main(void)
{
    FILE * fptr;
    char arr[MAXLEN];
    int i, num;
    struct data t;
    int ch;
    
    if((fptr = fopen(FNAME, "r")) == NULL)
    {
        fprintf(stderr, "Cannot open file %s, please check the file name.\n", FNAME);
        exit(1);
    }
    while(fscanf(fptr, "%d", &num) == 1)
    {
//        t = d[num];
        fscanf(fptr, "%s %s %d %d %d %d", t.fname, t.lname, &t.play_times, &t.hit_times,
                &t.zoulei_times, &t.paodian_times);
        t.rate = (float)t.hit_times / t.play_times;
        d[num] = t;
//        printf("%d %s %s %d %d %d %d %.2f.\n", num, t.fname, t.lname, t.play_times,
//                t.hit_times, t.zoulei_times, t.paodian_times, t.rate);
    }
    for(i = 0; i < ARRLEN; i++)
    {
        t = d[i];
        if(t.rate != 0)
        printf("%d %s %s %d %d %d %d %.2f.\n",i, t.fname, t.lname, t.play_times,
                t.hit_times, t.zoulei_times, t.paodian_times, t.rate);
    }
    
    return 0;
}
