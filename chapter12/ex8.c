// ex8.c -- 提供函数make_array()和show_array()的定义。*/
#include <stdio.h>
#include <stdlib.h>
int * make_array(int elem, int val);
void show_array(const int ar[], int n);
int main(void)
{
    int * pa;
    int size;
    int value;
    
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    while(size > 0)
    {
        printf("Enter the initialization value: ");
        scanf("%d", &value);
        pa = make_array(size, value);
        if(pa)
        {
            show_array(pa, size);
            free(pa);
        }
        printf("Enter the number of elements(<1 to quit): ");
        scanf("%d", &size);
    }
    printf("Done.\n");
    return 0;
}
int * make_array(int elem, int val)
{
    int * ptr = (int *)malloc(elem * sizeof(int));
    int i;
    
    for(i=0; i < elem; i++)
    {
        *(ptr + i) = val;
    }
    
    return ptr;
}

void show_array(const int ar[], int n)
{
    int i;
    
    printf("Here are the array generated:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
        if(i > 0 && (i+1)% 8 == 0)
            putchar('\n');
    }
    putchar('\n');
}
