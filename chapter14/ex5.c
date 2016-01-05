/* ex5.c -- �����ϰ5��дһ��������������Ҫ��
a.  �ⲿ����һ��name�ṹģ�壬������2����Ա��һ���ַ������ڴ�����֣���һ���ַ�
    �����ڴ�����ϡ�
b.  �ⲿ����һ��student�ṹģ�壬������3����Ա��һ��name�ṹ��һ�����3��������
    ������grade���飬�Լ�һ�������3��������ƽ���ֵı�����
c.  ʹmain()��������һ������CSIZE(CSIZE=4)��student�ṹ�����飬�������ʼ����Щ
    �ṹ�����ֲ��֡�ʹ�ú�����ִ��d��e��f�Լ�g����������������
d.  �����û�����ѧ�����ֺͷ������Խ����ػ�ȡÿ��ѧ���ĳɼ����������ŵ���Ӧ�ṹ
    ��grade�����Ա�С�����������ѡ����main()��һ��������ʵ�����ѭ����
e.  Ϊÿ���ṹ����ƽ���֣��������ֵ�����ʺϵĳ�Ա��
f.  ���ÿ���ṹ�е���Ϣ��
g.  ����ṹ��ÿ����ֵ��Ա�İ༶ƽ���֡�    */
#include <stdio.h>
#include <string.h>
#define LEN 20
#define CSIZE 4
struct name{
    char fname[LEN];
    char lname[LEN];
};
struct student{
    struct name fullname;
    float grade[3];
    float average_grade;
};
int main(void)
{
    char tname[LEN];
    int i, match_num;
    
    struct student ss[CSIZE] = {
        {{"Robin", "Lee"}},
        {{"Mark", "Zuckburg"}},
        {{"Liuxin", "Yang"}},
        {{"Rulphy", "Yang"}},
    };
    puts("Please enter the student's first name you want to enter grades:");
    puts("Press [enter] at the start of a line to quit.");
    while(gets(tname) != NULL && tname[0] != '\0')
    {
        printf("You enter %s.\n", tname);
       
        for(i=0; i <= CSIZE; i++)
        {
            if(i == CSIZE)
            {
                printf("There is not a student name %s, please check your input.\n", tname);
                break;
            }
            else if(strcmp(tname, ss[i].fullname.fname) == 0)
            {
                puts("Please enter the grades, like 88.5 15.6 98.5:");
                scanf("%f %f %f", &ss[i].grade[0], &ss[i].grade[1], &ss[i].grade[2]);
                puts("Awsome! You have succeeded input a group of grades.");
                 while(getchar() != '\n')    //���ĵ�������
                    continue;
                break;
            }
        }
        puts("Please enter the next first name of the student you want to enter grades.");
        puts("Press [enter] at the start of a line to quit.");
    }
    
    for(i=0; i < CSIZE; i++)
    {
        int total = ss[i].grade[0] + ss[i].grade[1] + ss[i].grade[2];
        if(total != 0)
        {
            ss[i].average_grade = total / 3.0;
        }
    }
    puts("-----");
    for(i=0; i < CSIZE; i++)
    {
        printf("%s %s, grade: %.2f %.2f %.2f, average grades: %.2f.\n", ss[i].fullname.fname,
                ss[i].fullname.lname, ss[i].grade[0], ss[i].grade[1], ss[i].grade[2],
                    ss[i].average_grade);
    }
    
    printf("Average grades of class:\n");
    for(i=0; i < 3; i++)
    {
        printf("average grade of lecture %d: %.2f.\n", i+1, (ss[0].grade[i]+ss[1].grade[i]+
                ss[2].grade[i] + ss[3].grade[i]) / 4.0);
    }
    
    return 0;
}
