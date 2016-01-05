/* ex4.c -- ��дһ�����򡣰�������Ҫ�󣬴���һ������������Ա�Ľṹģ�壺
a. ��һ����Ա����ᱣ�Ϻţ��ڶ�����Ա��һ������������Ա�Ľṹ�����ĵ�һ����Ա
�������ڶ�����Ա���������м�����֣����һ����Ա���ա���������ʼ��һ������5��
����ṹ�����顣������������ʽ������ݣ�
        Dribble, Flossie M. - 302039823
    �������м������ֻ��������ĵ�һ����ĸ���������һ����㡣��������м������
    Ϊ�գ���ô���ĵ�һ����ĸ�;�㶼���������дһ��������ʵ��������ѽṹ���鴫
    �ݸ����������
b. �޸�a���֣����ݽṹ��ֵ�����ǽṹ��ַ��*/
#include <stdio.h>
#include <string.h>
#define LEN 20
#define LENG 5
struct fullname{
	char fname[LEN];
	char mname[LEN];
	char lname[LEN];
};
struct pp{
	char ssnum[20];
	struct fullname name;
};
void print(const struct pp names[], int);
void print1(const char * , const char * , const char *, const char *);  //b
int main(void)
{
	struct pp names[LENG] = {
		{"301", {"Geogle", "Wlaker", "Bush"}},
		{"303", {"Robin", "Yanhong", "Lee"}},
		{"305", {"Dribble", "Michael", "Flossie"}},
		{"310", {"Jinping","" , "Xi"}},
		{"333", {"Edison", "Hingwa", "Chan"}}
	};
	int i;
	struct pp t;
	
//	print(names, LENG);
    for(i=0; i < LENG; i++)
    {
        t = names[i];
        print1(t.ssnum, t.name.fname, t.name.mname, t.name.lname);
    }

	return 0;
}

void print(const struct pp names[], int length)
{
	int i;
	struct pp t; 

	for(i = 0; i < length; i++)
	{
		t = names[i];
		if(strlen(t.name.mname) == 0)
		{
			printf("%s, %s - %s\n", t.name.fname, t.name.lname, t.ssnum);
		}
		else
		{		
			printf("%s, %s %c. - %s\n", t.name.fname, t.name.lname,
                    t.name.mname[0], t.ssnum);
		}
	}
}

void print1(const char * ssnum, const char * fname, const char * mname,
                const char * lname )
{
    if(strlen(mname) == 0)
    {
        printf("%s, %s - %s\n", fname, lname, ssnum);
    }
    else
    {
        printf("%s, %s %c. - %s\n", fname, lname, mname[0], ssnum);
    }
}
