/* example14-11.c -- complit.c ���������ڽṹ�е�ʹ�� */
#include <stdio.h>
#define MAXTITL 41
#define MAXAUTL 31

struct book{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book readfirst;
    int score;
    
    printf("Enter test score: ");
    scanf("%d", &score);
    
    if(score >= 84)
        readfirst = (struct book){"Crime and Punishment",
                        "Pydor Dostoyevsky",
                        9.99};  //��һ�д������ʹ�ø�������Ϊ�ṹ��ֵ
    else
        readfirst = (struct book){"Mr.Bouncy's Nice Hat",
                        "Fred Winsome",
                        5.99};

    printf("Your assigned reading:\n");
    printf("%s by %s: $%.2f\n", readfirst.title, readfirst.author,
                 readfirst.value);

    return 0;
}
