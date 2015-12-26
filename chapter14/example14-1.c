/* example14-1.c --程序清单14.1 book.c */
#include <stdio.h>
#define MAXTITL 41  //书名最大长度
#define MAXAUTL 31 //作者名最大长度
struct book{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};      /* 结构模版结束 */
int main(void)
{
    struct book library;
    printf("Please enter the book title.\n");
    gets(library.title);
    printf("Now enter the author.\n");
    gets(library.author);
    printf("Now enter the value.\n");
    scanf("%f", &library.value);
    printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
    printf("%s: \"%s\" ($%.2f)\n", library.author, library.title, library.value);
    printf("Done.\n");
    
    return 0;
}

