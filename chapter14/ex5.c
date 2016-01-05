/* ex5.c -- 编程练习5，写一个程序，满足下列要求：
a.  外部定义一个name结构模板，它含有2个成员：一个字符串用于存放名字，另一个字符
    串用于存放姓氏。
b.  外部定义一个student结构模板，它含有3个成员：一个name结构，一个存放3个浮点数
    分数的grade数组，以及一个存放这3个分数的平均分的变量。
c.  使main()函数声明一个具有CSIZE(CSIZE=4)个student结构的数组，并随意初始化这些
    结构的名字部分。使用函数来执行d、e、f以及g部分所描述的任务。
d.  请求用户输入学生名字和分数，以交互地获取每个学生的成绩。将分数放到响应结构
    的grade数组成员中。您可以自主选择在main()或一个函数中实现这个循环。
e.  为每个结构计算平均分，并把这个值赋给适合的成员。
f.  输出每个结构中的信息。
g.  输出结构的每个数值成员的班级平均分。    */
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
                 while(getchar() != '\n')    //消耗掉输入行
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
