/*two_func.c 在一个文件中使用2个函数*/
#include <stdio.h>
void butler(void);//ISO/ANIS C函数原型
int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable CD-ROMS.\n");
    return 0;
}

void butler(void)//函数定义的开始
{
    printf("You rang, sir?\n");
}
