/* ex3.c -- �޸ĳ����嵥14.2�е���Ŀ�б����ʹ�����Ȱ��������˳�����ͼ���
������Ȼ���ձ������ĸ�������ͼ��������������valueֵ���������ͼ�������
���� book listing program 14.2 -- �����౾���ͼ��Ŀ¼
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
#include <string.h>
#include <ctype.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
void book_title_order(struct book [MAXBKS], int [MAXBKS], int);
void book_value_order(struct book [MAXBKS], int [MAXBKS], int);

    int main(void)
    {
        struct book library[MAXBKS];/* = {
            {"A", "Caoxueqin", 12.99},
            {"B", "No name", 10.99},
            {"F", "Buzhidao", 9.99},
            {"E", "Wuchengen", 6.99},
            {"D", "shinaian", 7.99},
            {"C", "Max Zuckburg", 15.99}
        };*/
    int title[MAXBKS];
    int value[MAXBKS];
    int index, count;
//    int i;
    
    printf("Please enter the book title:\n");
    printf("Press [enter] at the start of a line to quit.\n");
    while(count < MAXBKS && gets(library[count].title) != NULL &&
                    library[count].title[0] != '\0')
    {
        printf("Now enter the book author: \n");
        gets(library[count].author);
        printf("Now enter the book value:\n");
        scanf("%f", &library[count++].value);
        while(getchar() != '\n')
            continue;
        if(count < MAXBKS)
            printf("Please enter the next book title:\n");
    }
    if(count > 0)
    {
        printf("Here is the books you entered (default order):\n");
        for(index = 0; index < count; index++)
        {
            printf("%s by %s: $%.2f.\n", library[index].title,
                    library[index].author, library[index].value);
        }
        puts("--------");
        printf("Here is the books you entered (book title order):\n");
        book_title_order(library, title, count);
        for(index = 0 ; index < count; index++)
        {
            printf("%s by %s: $%.2f.\n", 
                    library[title[index]].title, library[title[index]].author,
                    library[title[index]].value);
        }
        puts("--------");
        
        book_value_order(library, value, count);
        printf("Here is the books you entered (value order):\n");
        for(index = 0; index < count; index++)
        {
            printf("%s by %s: $%.2f.\n",
                    library[value[index]].title,library[value[index]].author,
                    library[value[index]].value);
        }
    }
    printf("Done. Thanks for using.\n");
    
    return 0;
}

void book_title_order(struct book library[MAXBKS], int title[MAXBKS], int count)
{
    int i,j;
    int t, temp;
    int result;
    
    for(i = 0; i < count; i++)
    {
        title[i] = i;
    }
    for(i = 0; i < count; i++)  //����ѭ���ܴ���
    {
        for(j = 0; j < count - i - 1; j++)  //ÿ��ִ�м��αȽ�
        {
            result = strcmp(library[title[j]].title, library[title[j+1]].title);
            if(result > 0)
            {
//                printf(">>title[%d], title[%d], %s, %s\n", j, j + 1,
//                    library[title[j]].title, library[title[j+1]].title);
                temp = title[j];
                title[j] = title[j+1];
                title[j + 1] = temp;
//                printf("Now title:");
//                 for(t = 0; t < count; t++)
//                {
//                    printf("%d:%s, ", title[t], library[title[t]].title);
//                }
//                putchar('\n');
            }
//            else
//            {
//                printf("--title[%d], title[%d], %s, %s\n", j, j + 1,
//                        library[title[j]].title, library[title[j+1]].title);
//            }
        }
    }
//     for(i = 0; i < count; i++)
//        {
//            printf("%d ", title[i]);
//        }
//        putchar('\n');
}

void book_value_order(struct book library[MAXBKS], int value[MAXBKS], int count)
{
    int i,j;
    int temp;
    for(i = 0; i < count; i++)
    {
        value[i] = i;
    }
    for(i = 0; i < count - 1; i++)
    {
        for(j = 0; j < count - i - 1; j++)
        {
            if(library[value[j]].value > library[value[j+1]].value)
            {
//                printf("%d > %d, so change order.\n", library[value[j]].value,
//                    library[value[j+1]].value);
                temp = value[j];
                value[j] = value[j + 1];
                value[j + 1] = temp;
            }
        }
    }
//    printf("Now value[%d] is: ", count);
//        for(i = 0; i < count; i ++)
//        {
//            printf("%d ", value[i]);
//        }
//        putchar('\n');
}

