#include <stdio.h>
int main(void)
{
    int dogs;

    printf("How many dogs do you have?\n");
    scanf("%d", &dogs);//读取用户输入
    printf("So you have %d dog(s)!\n", dogs);
    return 0;	
}
