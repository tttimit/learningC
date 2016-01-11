/* ex6.c -- 设计一个位字段来存储一些信息，并使用循环的菜单让用户改变参数 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fontdata{
  unsigned int FontID:8;
  unsigned int FontSize:7;
  unsigned int Alignment:2; //0-Left 1=Cneter 2=Right
  unsigned int Bold:1;
  unsigned int Italic:1;
  unsigned int Underline:1;
};

void show(struct fontdata);
char * oo(int);
void showmenu(void);
int main(void)
{
    char choice;
    struct fontdata flags;
    
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
    	while(getchar() != '\n')
			continue;
        switch(choice)
        {
        	case 'f':
				printf("Enter fontID (0-255): ");
				scanf("%d", &choice);
				choice &= 0xff;
				flags.FontID = choice;
				break;
        	case 's':
        		printf("Enter font size (0-127): ");
        		scanf("%d", &choice);
        		choice &= 0x7f;
        		flags.FontSize = choice;
				break;
        	case 'a':
				printf("Select alignment:\n");
				printf("l)left c)center r)right\n");
				scanf("%c", &choice);
				switch(choice)
				{
					case 'l':
						flags.Alignment = 0;
						break;
					case 'c':
						flags.Alignment = 1;
						break;
					case 'r':
						flags.Alignment = 2;
						break;
				}
				while(getchar() != '\n')
					continue;
				break;
        	case 'b':
        		flags.Bold = flags.Bold == 1?0:1;
				break;
        	case 'i':
        		flags.Italic = flags.Italic == 1?0:1;
  				break;
        	case 'u':
        		flags.Underline = flags.Underline == 1?0:1;
				break;
        	case 'q':
        		printf("Bye!\n");
        		exit(0);
				break;
			default:
				printf("Unexpected error occurs, program exit.\n");
				exit(1);
		}
		show(flags);
		showmenu();
    }  
}

void show(struct fontdata flag)
{
    char ali[7];
//    printf("flag Aligment: %d\n", flag.Alignment);
   switch(flag.Alignment)
   {
        case 0:
            strcpy(ali, "Left");
            break;
        case 1:
            strcpy(ali, "Center");
            break;
        case 2:
            strcpy(ali, "Right");
            break;
   }
      
    printf("ID SIZE ALIGNMENT B I U\n");
    printf("%d %d %s %s %s %s\n", flag.FontID, flag.FontSize, ali, oo(flag.Bold),
                oo(flag.Italic), oo(flag.Underline));
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
