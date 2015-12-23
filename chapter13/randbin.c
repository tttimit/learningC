/* randbin.c -- 随机存取，二进制I/O */
#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000

int main()
{
    double numbers[ARSIZE];
    double value;
    const char * file = "numbers.dat";
    int i;
    long pos;
    FILE *iofile;
    for(i=0; i < ARSIZE; i++)
        numbers[i] = 100.0 * i + 1.0 / (i + 1);
    if((iofile = fopen(file, "wb")) == NULL)
    {
        fprintf(stderr, "Could not open %s for output.\n", file);
        exit(1);
    }
    fwrite(numbers, sizeof(double), ARSIZE, iofile);/*将numbers数组中的内容写入
    到iofile文件指针中，数组元素个数为ARSIZE个，每个长度为size（double）  */
    fclose(iofile);
    if((iofile = fopen(file, "rb")) == NULL)
    {
        fprintf(stderr, "Could not open %s for random access.\n", file);
        exit(1);
    }
    printf("Enter an index in the range 0-%d.\n", ARSIZE -1);
    scanf("%d", &i);
    while(i >= 0 && i < ARSIZE)
    {
        pos = (long)i * sizeof(double);
        fseek(iofile, pos, SEEK_SET);/*将流的文件位置设置到指定位置，SEEK_SET
        表示从文件头开始，SEEK_CUR表示从当前位置， SEEK_END表示从文件尾。偏移量
        就是pos，对应的文件就是iofile*/
        fread(&value, sizeof(double), 1, iofile);/*从iofile中读取数据放到&value
        这个地址中，读取的个数为1，每次读取的长度为sizeof（double）个字节*/
        printf("The value there is %f.\n", value);
        printf("Next index (out of range to quit): \n");
        scanf("%d", &i);
    }
    fclose(iofile);
    puts("Bye!");
    return 0;
}
