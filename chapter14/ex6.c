/* ex6.c -- 题干比较长，就不写了，大概意思是读取一个文本文件，获取一个棒球运动员
的一些数据信息，然后计算一些比率，并显示结果 */
#include <stdio.h>
#include <stdlib.h>
#define LEN 20
#define ARRLEN 18
#define MAXLEN 81
#define FNAME "baseball_team"

struct data{
    char fname[LEN];
    char lname[LEN];
    int play_times;     //上场次数
    int hit_times;      //击中数
    int zoulei_times;   //走垒数
    int paodian_times;  //跑点数
    float rate;         //击球平均成攻略
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
