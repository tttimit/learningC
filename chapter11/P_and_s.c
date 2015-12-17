/* p_and_s.c -- 指针和字符串 */
#include <stdio.h>
int main(void)
{
    char * mesg = "Don't be a fool!";
    char * copy;
    
    copy = mesg;
    printf("%s\n", copy);
    printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
    printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);
    return 0;
    
    /*
    Don't be a fool!
    mesg = Don't be a fool!; &mesg = 000000000022FE48; value = 0000000000404000
    copy = Don't be a fool!; &copy = 000000000022FE40; value = 0000000000404000

    上述输出的第一项都是字符串：Don't be a fool!
    第二项：打印的是mesg和copy这2个指针的地址，它们分别在上面的2个位置
    注意第三项，打印的是指针的值，也就是它们存储元素的地址，可以看到它们是相同的。
    也就是说，copy = mesg执行的实际上是把mesg的值复制给copy，现在这2个指针指向的
    是同一个地址
    
    这样做的原因是，例如在程序中要复制一个数组，此时复制指针只需要一次操作，如果
    复制数组的元素，那么操作次数大幅增加。
    
    另外，通常程序中需要的只有地址。如果确实需要字符串，有专门的strcpy()函数和
    strncpy()来执行。

    */
}
