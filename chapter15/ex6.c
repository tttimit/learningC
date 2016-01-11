/* ex6.c -- 设计一个位字段来存储一些信息，并使用循环的菜单让用户改变参数 */
#include <stdio.h>

struct fontdata{
  unsigned int FontID:8;
  unsigned int FontSize:7;
  unsigned int Alignment:1; //0-Left 1=Cneter 2=Right
  _Bool Bold:1;
  _Bool Italic:1;
  _Bool Underline:1;  
} flags;

void show(struct fontdata);
char * oo(int);
void showmenu(void);
int main(void)
{
    char choice;
    
    flags.FontID = 1;
    flags.FontSize = 12;
    flags.Alignment = 0;
    flags.Bold = 0;
    flags.Italic = 0;
    flags.Underline = 0;
    show(flags);
    showmenu();   
    while(scanf("%c", &choice) == 1)
    {
        
    }  
}

void show(struct fontdata)
{
    char ali[5];
    
   switch(fontdata.Alignment)
   {
        case 0:
            ali = "Left";
            break;
        case 1:
            ali = "Center";
            break;
        case 2:
            ali = "Right";
            break;
   }
      
    printf("ID SIZE ALIGNMENT B I U\n");
    printf("%d %d %s %s %s %s\n", fontdata.FontID, fontdata.FontSize, ali, oo(fontdata.Bold),
                oo(fontdata.Italic), oo(fontdata.Underline));
}

char * oo(int a)
{
    if(a == 0)
        return "Off";
    else
        return "On";
}

void showmenu(void)
{
    printf("f)change font s)change size a)change alignment\n");
    printf("b)toggle bold i)toggle italic u)toggle underline\n");
    printf("q)quit\n");
}