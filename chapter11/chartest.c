/* chartext.c -- 测试字符串在内存中存放时，如果多个变量指向该字符串，如果一个变量
修改了该字符串中的某个元素，其他的地方变不变 */
#include <stdio.h>
int main(void)
{
    char * p1 = "Klingon";
    p1[0] = 'F';
    printf("Klingon");
    printf(": Believe the %ss!\n", "Klingon");
    return 0;
    
    //上面这种形式对编译器来说正常，但是执行起来就出现错误
    //原因是，对于字符串Klingon，在内存中只有一份，p1[0] = 'F'，这句代码修改了
    //Klingon中的某个元素，后续在使用时就会出现内存错误
    //因此对于字符串，尽量使用const char * p1来定义。
}
