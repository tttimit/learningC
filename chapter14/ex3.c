/* ex3.c -- �޸ĳ����嵥14.2�е���Ŀ�б����ʹ�����Ȱ��������˳�����ͻ����
������Ȼ���ձ������ĸ�������ͼ��������������valueֵ���������ͼ�������
�� book listing program 14.2 -- �����౾���ͼ��Ŀ¼
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

