/* example14-10.c -- name3.c 使用指针和malloc（）函数 */
#include <stdio.h>
#include <string.h> // strcpy(), strlen()
#include <stdlib.h> //malloc() , free()

struct namect{
    char * fname;   //这里在结构体中使用字符指针来指向字符串
    char * lname;
    int letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);
void cleanup(const struct namect * pst);

int main(void)
{
    struct namect person;
    
    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);
    cleanup(&person);
    
    return 0;
}

void getinfo(struct namect * pst)
{
    char temp[81];
    printf("Please enter your first name.\n");
    gets(temp);
    pst->fname = (char*)malloc(strlen(temp) + 1);
    strcpy(pst->fname, temp);
    printf("Please enter your last name.\n");
    gets(temp);
    pst->lname = (char*)malloc(strlen(temp) +1);
    strcpy(pst->lname, temp);
}

void makeinfo(struct namect * pst)
{
    pst -> letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect * pst)
{
    printf("%s %s, your name contains %d letters.\n", pst->fname,
                pst->lname, pst->letters);
}

void cleanup(const struct namect * pst)
{
    free(pst->fname);
    free(pst->lname);
}
