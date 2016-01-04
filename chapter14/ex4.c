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
int main(void)
{
	struct pp names[LENG] = {
		{"301", {"Geogle", "Wlaker", "Bush"}},
		{"303", {"Robin", "Yanhong", "Lee"}},
		{"305", {"Dribble", "Michael", "Flossie"}},
		{"310", {"Jinping","" , "Xi"}},
		{"333", {"Edison", "Hingwa", "Chan"}}
	};
	
	print(names, LENG);

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
			printf("%s, %s %c. - %s\n", t.name.fname, t.name.lname, t.name.mname[0], t.ssnum);
		}
	}
}
