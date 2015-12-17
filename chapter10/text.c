#include <stdio.h>
int main(void)
{
//4.a
//   int *ptr;
//   int torf[2][2] = {12, 14, 16};
//   ptr = torf[0];
//   printf("*ptr=%d, *(ptr+2)=%d\n", *ptr, *(ptr+2));
//   printf("ptr=%p, ptr+2=%p\n", ptr, ptr+2);

//4.b
//    int * ptr;
//    int fort[2][2] = {{12}, {14, 16}};
//    ptr = fort[0];
//    printf("fort[0]= %p, fort[1] = %p\n", fort[0], fort[1]);
//    printf("*ptr   = %d, *(ptr+2)= %d\n", *ptr, *(ptr+2));
//    printf(" ptr   = %p, ptr+2   = %p\n", ptr, ptr+2);
//5.a
//    int (* ptr)[2];
//    int torf[2][2] = {12, 14, 16};
//    ptr = torf;
//    printf("**ptr=%d, **(ptr +1)=%d\n", **ptr, **(ptr +1));
//    printf("*ptr=%p, *(ptr+1)=%p\n", *ptr, *(ptr + 1));

//5.b
    int (*ptr)[2];
    int fort[2][2] = {{12}, {14, 16}};
    ptr = fort;
    printf("**ptr=%d,*(*(ptr+1)+1)=%d\n",**ptr, *(*(ptr+1)+1));
    printf("*ptr=%p, *(ptr+1)=%p\n", *ptr, *(ptr+1));
    return 0;
}
