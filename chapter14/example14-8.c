/* example14-8.c -- names1.c 使用指向结构的指针 */
#include <stdio.h>
#include <string.h>

struct namect{
    char fname[20];
    char lname[20];
    int letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);

int main(void)
{
    struct namect person;
    
    getinfo(&person);
    makeinfo(&person);      // 传递的是结构的地址 即指针
    showinfo(&person);      //同上
    
    return 0;
}
void getinfo(struct namect * pst)
{
    printf("Please enter your first name.\n");
    gets(pst->fname);                           //指向结构的指针使用->来获取成员
    printf("Please enter your last name.\n");
    gets(pst->lname);
}

void makeinfo(struct namect * pst)
{
    pst -> letters = strlen(pst -> fname) + strlen(pst->lname); //获取姓加名的长度
}

void showinfo(const struct namect * pst)
{
    printf("%s %s, your name contains %d letters.\n", pst->fname, pst->lname,
                pst->letters);
}
