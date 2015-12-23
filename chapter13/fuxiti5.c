/* fuxiti5.c -- 编写一段程序。它接受两个命令行参数，第一个是一个字符，第二个是
文件名。要求程序只打印文件中包含给定字符的那些行。 */
#include <stdio.h>  //为fprintf（）提供原型
#include <stdlib.h> //为exit（）提供原型.
#include <string.h> //为strchr（）提供原型
_Bool isgood(char *);   //判断该字符串是否只有一个字符
#define MAXLENGTH 256
int main(int argc, char * argv[])
{
    FILE * fp;
    char str[MAXLENGTH];
    char * pta;
    
    if(argc > 3)
    {
        fprintf(stderr, "Too many arguments.\n");
        exit(2);
    }
    else if(!isgood(argv[1]))
    {
        fprintf(stderr, "The first argument must and only be an character.\n");
        exit(1);
    }
    else if((fp = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "Cannot open the file %s.\n", argv[2]);
        exit(3);
    }
    printf("All good, start to go!\n");
    while((pta = fgets(str, MAXLENGTH, fp)) != NULL)
    {
//        printf("check a new line.\n");
        if(strchr(pta, *argv[1]) != NULL)
        {
//            printf("got a new line!\n");
            fputs(pta, stdout);
        }
    }
    return 0;
}

_Bool isgood(char * str)
{
    int count = 0;
    int i = 0;
    
    while(str[i++] != '\0')
    {
        count++;
    }
    
    if(count>1)
        return 0;
    else
        return 1;
    
}
