/* example14-8.c -- names1.c ʹ��ָ��ṹ��ָ�� */
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
    makeinfo(&person);      // ���ݵ��ǽṹ�ĵ�ַ ��ָ��
    showinfo(&person);      //ͬ��
    
    return 0;
}
void getinfo(struct namect * pst)
{
    printf("Please enter your first name.\n");
    gets(pst->fname);                           //ָ��ṹ��ָ��ʹ��->����ȡ��Ա
    printf("Please enter your last name.\n");
    gets(pst->lname);
}

void makeinfo(struct namect * pst)
{
    pst -> letters = strlen(pst -> fname) + strlen(pst->lname); //��ȡ�ռ����ĳ���
}

void showinfo(const struct namect * pst)
{
    printf("%s %s, your name contains %d letters.\n", pst->fname, pst->lname,
                pst->letters);
}