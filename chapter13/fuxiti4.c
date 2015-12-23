/* fuxiti4.c -- ��ϰ������� ���������в�����ȡ�ļ���������ĸ���������ӡ����ƽ��ֵ*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[])
{
    FILE * fp;
    int count;
    float result, num;
    
    if(argc > 2)
    {
        fprintf(stderr, "To many arguments.\n");
        exit(2);
    }
    else if(argc == 2)
    {
//        const char * fname = argv[1];
        if((fp = fopen(argv[1], "r")) == NULL)
        {
            fprintf(stderr, "Cannot open file %s.\n", argv[0]);
            exit(1);
        }
        while(fscanf(fp, "%f", &num) == 1)
        {
            result += num;
            count++;
        }
        printf("The mathmatical average is %f.\n", result/count);
        fclose(fp);
    }
    else if(argc == 1)
    {
        while(scanf("%f", &num) == 1)
        {
            result += num;
            count++;
        }
        printf("The mathmatical average is %f.\n", result/count);
    }
    return 0;
}
