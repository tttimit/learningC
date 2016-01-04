/* ex4.c -- 编写一个程序。按照下列要求，创建一个含有两个成员的结构模板：
a. 第一个成员是社会保障号；第二个成员是一个含有三个成员的结构。它的第一个成员
是名，第二个成员是名和姓中间的名字，最后一个成员是姓。创建并初始化一个含有5个
此类结构的数组。程序以下列形式输出数据：
        Dribble, Flossie M. - 302039823
    名和姓中间的名字只输出了它的第一个字母，后面加了一个句点。如果姓名中间的名字
    为空，那么它的第一个字母和句点都不会输出。写一个函数来实现输出，把结构数组传
    递给这个函数。
b. 修改a部分，传递结构的值而不是结构地址。*/
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
