/* name3.c -- 使用fgets()函数来进行读取 */
#include <stdio.h>
#define MAX 81
int main(void)
{
    char name[MAX];
    char * ptr;
    
    printf("Hi, what's your name?\n");
    ptr = fgets(name, MAX, stdin);
    printf("%s? Ah! %s!\n", name, ptr);
    
    return 0;
    
    /*fgets()是专门为file I/O设计的读取函数，可以指定读入字符的个数，当读取了n-1
    个或者遇到换行符后，读取就会结束。
    第三个参数指明读取的输入文件，键盘的话参数为stdin，由stdio.h定义。
    fgets()会将读取到的换行符存储起来，不像gets()那样，遇到换行符不存
    */
}
