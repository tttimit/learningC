/* fuxiti7.c -- ��ϰ���7�⣬��c�� */
#include <stdio.h>
#include "starfolk.h"
void printbem(struct bem *);
int main(void)
{
    struct bem b = {
        6, {"Lingyun", "Zhang"}, "Computer Science"
    };
    
    printbem(&b);
    
    return 0;
}

void printbem(struct bem * ptr)
{
    printf("%s %s is a %d-limbed %s.\n", ptr->title.first, ptr->title.last,
            ptr->limbs, ptr->type);
}


