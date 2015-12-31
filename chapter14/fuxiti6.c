/* fuxiti6.c -- 给struct赋值或初始化 */
#include <stdio.h>
#include <string.h>
typedef struct lens{ //镜头描述
    float foclen;   //焦距长度，以mm为单位
    float fstop;    //孔径
    char brand[30]; //品牌名称
} LENS;

void a(void);
void b(void);

int main(void)
{
   
    a(); //使用各个成员赋值
    puts("-----");
    b(); //使用指定初始化项目列表
    
    return 0;
}

void a(void)
{
    LENS len[10];
    
    len[2].foclen = 500;
    len[2].fstop = 2.0;
    strcpy(len[2].brand, "Remarkatar");
    
    printf("焦距长度为%.fmm，孔径为f/%.1f的%s镜头\n", len[2].foclen,
            len[2].fstop, len[2].brand);
}

void b(void)
{
    LENS len[10] = {{},{},{500, 2.0, "Remarkatar"}};
    
    printf("焦距长度为%.fmm，孔径为f/%.1f的%s镜头\n", len[2].foclen,
            len[2].fstop, len[2].brand);
    
}

