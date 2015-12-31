/* test */
#include <stdio.h>
int main(void)
{

struct name{
    char first[20];
    char last[20];
};

struct bem{
    int limbs;
    struct name title;
    char type[30];
};

struct bem * pb;
struct bem deb = {
    6,
    {"Berbnazel", "Gwolkapwolk"},
    "Arcturan"
};

pb = &deb;

//printf("%d\n", deb.limbs);
//printf("%s\n", pb->type);
//printf("%s\n", pb->type + 2);

printf("to show :%s\n", deb.title.last);
printf("to show :%s\n", pb->title.last);

}
