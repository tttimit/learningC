/* ex3.c -- 修改程序清单14.2中的数目列表程序，使它首先按照输入的顺序输出突出的
秒数，然后按照标题的字母升序输出图书的秒数，最后按照value值的升序输出图书的描述
附 book listing program 14.2 -- 包含多本书的图书目录
#include <stdio.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
int main(void)
{
    struct book library[MAXBKS];
    int count = 0;
    int index;
    
    printf("Please enter the book title.\n");
    printf("Press [enter] at the start of a line to quit.\n");
    while(count < MAXBKS && gets(library[count].title) != NULL &&
                library[count].title[0] != '\0)
    {
        printf("Now enter the author.\n");
        gets(library[count].author);
        printf("Now enter the value.\n");
        scanf("%f", &library[count++].value);
        while(getchar() != '\n')
            continue;
        if(count < MAXBKS)
            printf("Enter the next title.\n");
    }
    if(count > 0)
    {
        printf("Here is the list of your books: \n"):
        for(index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title,
                    library[index].author,library[indxe].value);
    }
    else
    {
        printf("No books? Too bad.\n");
    }

    return 0;
*/
#include <stdio.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

