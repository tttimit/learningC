/* ex7.c -- 修改程序清单14.14，在从文件中读出每个记录并且显示它时，允许用户选择
删除该记录或修改该记录的内容。如果删除记录，把空出来的数组空间留给下一个要读入
的记录。要能够改变现有的文件内容，必须使用“r+b”模式，而不是“a+b”模式。要注
意文件指针的定位，以便追加的记录不会覆盖已有的记录。最简单的方法是对存储在程序
内存中的数据做所有的改变，然后再把最后的信息集写入文件中。  */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100
struct book{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library[MAXBKS];
    int count = 0;
    int index, filecount, i;
    FILE * pbooks;
    int size = sizeof(struct book);
    int choice, ch;
    fpos_t *pos;

    if((pbooks = fopen("book.dat", "r+b")) == NULL)
    {
        fputs("Can't open book.dat file\n", stderr);
        exit(1);
    }
    rewind(pbooks);
    while(count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
    {
        printf("reading library[%d].\n", count);
        if(i == 0)
            puts("Current countents of book.dat: ");
        printf("%s by %s: $%.2f\n", library[count].title,
                    library[count].author, library[count].value);
        printf("You can modify this record or delete it, enter 1 to modify,\n");
        printf("enter 2 to delete it, press enter directly to show next record.\n");
        if((ch = getchar()) != '\n')
        {
            choice = atoi(ch+"\0");
            if(choice == 1)
            {
                puts("Enter the new book title:");
                gets(library[count].title);
                puts("Enter the new author:");
                gets(library[count].author);
                puts("Enter the book value:");
                scanf("%f", library[count].value);
                printf("Now this record is: %s by %s: $%.2f\n", library[count].title,
                library[count].author, library[count].value);
//                fseek(pbooks, - ftell(pbooks) / (count + 1), SEEK_CUR);
//                fwrite(&library[count], size, 1, pbooks);
                count++;
            }
            else if(choice == 2)
            {
                continue;
            }
        }
        else
            count++;
    }
    filecount = count;
    fclose(pbooks);
    pbooks = fopen("book.dat", "wb");
    //到这里读取结束了，应该把数组内容写入到文件中
    for(i = 0; i < count; i++)
    {
        fwrite(&library[i], size, 1, pbooks);
        if(i != count - 1)
            putchar('\n');
    }
    
    if(count ==  MAXBKS)
    {
        fputs("The book.dat file is full.", stderr);
        exit(2);
    }
    puts("Please add new book titles.");
    puts("Press [enter] at the start of a line to stop.");
    while(count < MAXBKS && gets(library[count].title) != NULL &&
            library[count].title[0] != '\0')
    {
//        printf("collecting library[%d] data.\n", count);
        puts("Now enter the author.");
        gets(library[count].author);
        puts("Now enter the value.");
        scanf("%f", &library[count++].value);
        while(getchar() != '\n')
            continue;               //清除输入行
        if(count < MAXBKS)
            puts("Enter the next title.");
    }
    if(count > 0)
    {
        puts("Here is the list of your books: ");
        for(index = 0; index < count; index++)
        {
            printf("%s by %s: $%.2f\n", library[index].title,
                        library[index].author, library[index].value);
        }
        fwrite(&library[filecount], size, count-filecount, pbooks); //一次性写入
    }
    else
        puts("No books? Too bad.\n");

    puts("Bye.\n");
    fclose(pbooks);

    return 0;
}


