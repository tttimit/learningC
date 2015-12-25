/* ex10.c -- 编写一个程序，打开一个文本文件，文件名通过交互方式获得。建立一个
循环，请求用户输入一个文件位置。然后程序打印文件中从该位置开始到下一个换行符
之间的部分。用户通过输入非数字字符来终止输入循环 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 81
int main(void)
{
    char fname[MAX];
    FILE * fp;
    long int start, currentloc;
    int ch;
    
    printf("Please enter the name of file you want to open:\n");
    scanf("%s", fname);
    if((fp = fopen(fname, "r")) == NULL)
    {
        fprintf(stderr, "Sorry, cannot open the file \"%s\".\n", fname);
        exit(EXIT_FAILURE);
    }
    printf("Please enter the location you want to start:\n");
    while(scanf("%ld", &start) == 1)
    {
        currentloc = 0;
        while((ch = fgetc(fp)) != EOF && ch != '\n')
        {
            currentloc++;
            if(currentloc >= start)
                putchar(ch);
        }
        printf("\nPlease enter the location you want to start (enter a "
                "non-digit to quit):\n");
    }
    printf("Done. Thanks for using. Good bye!\n");
    
    return 0;
}
