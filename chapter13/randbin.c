/* randbin.c -- �����ȡ��������I/O */
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
    fwrite(numbers, sizeof(double), ARSIZE, iofile);/*��numbers�����е�����д��
    ��iofile�ļ�ָ���У�����Ԫ�ظ���ΪARSIZE����ÿ������Ϊsize��double��  */
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
        fseek(iofile, pos, SEEK_SET);/*�������ļ�λ�����õ�ָ��λ�ã�SEEK_SET
        ��ʾ���ļ�ͷ��ʼ��SEEK_CUR��ʾ�ӵ�ǰλ�ã� SEEK_END��ʾ���ļ�β��ƫ����
        ����pos����Ӧ���ļ�����iofile*/
        fread(&value, sizeof(double), 1, iofile);/*��iofile�ж�ȡ���ݷŵ�&value
        �����ַ�У���ȡ�ĸ���Ϊ1��ÿ�ζ�ȡ�ĳ���Ϊsizeof��double�����ֽ�*/
        printf("The value there is %f.\n", value);
        printf("Next index (out of range to quit): \n");
        scanf("%d", &i);
    }
    fclose(iofile);
    puts("Bye!");
    return 0;
}
