#include <stdio.h>
int main(int argc, char * argv[])
{

    int count = 0;
    int i = 0;

    while(argv[1][i++] != '\0')
    {
        count++;
    }

    if(count>1)
        printf("大于1个字符\n");
    else
        printf("只有一个字符\n");


    
//    printf("size of input *argv1 is: %d\n", sizeof(*argv[1]));
//    printf("size of input argv[1] is: %d\n", sizeof(argv[1]));
//    printf("size of \"d\" is : %d\n", sizeof("d"));
//    printf("size of \"de\" is : %d\n", sizeof("de"));
//    printf("size of 'd' is: %d\n", sizeof('d'));
//    printf("size of a char is : %d\n", sizeof(char));
//    printf("size of a char * is: %d\n", sizeof(char *));
    return 0;
}
