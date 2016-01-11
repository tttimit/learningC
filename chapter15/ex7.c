/* ex7.c -- 编写一个与ex6.c类似的程序。但是使用一个unsigned long来保存字体信息，
使用位运算符而不是位成员来管理这些信息。 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void show(unsigned long);
char * oo(int);
void showmenu(void);
int main(void)
{
	char choice, choice2;
    unsigned long temp;
    unsigned long flags = 0x00000;    

    flags |= 0x00001; 			
    flags |= 0x00c00;   		

    show(flags);
    showmenu();
    while(scanf("%c", &choice) == 1) 
    {
//    	while(getchar() != '\n')    //放在前面，第二次选择菜单就会侦测到换行符
//		{                           //放在后面就没事。。。
//			puts("111");
//			continue;
//		}
		printf("Now the choice is -%c-\n", choice);
        switch(choice)
        {
        	case 'f':
				printf("Enter fontID (0-255): ");
				scanf("%lu", &temp);
				temp &= 0xff;
				flags &= 0xfff00;
				flags |= temp;
				break;
        	case 's':
        		printf("Enter font size (0-127): ");
        		scanf("%lu", &temp);
        		temp &= 0x7f;
        		flags &= 0xf80ff;
        		flags |= (temp << 8);
				break;
        	case 'a':
				while(getchar() != '\n')
				{
					continue;
				}
				printf("Select alignment:\n");
				printf("l)left c)center r)right\n");
				scanf("%c", &choice2);
				printf("now choice is --%c--\n", choice2);
				switch(choice2)
				{
					case 'l':
						flags &= 0xe7fff;
						break;
					case 'c':
						flags &= 0xe7fff;
						flags |= 0x08000;
						break;
					case 'r':
						flags &= 0xe7fff;
						flags |= 0x10000;
						break;
					defalut:
						printf("Invalid input.\n");
				}
				break;
        	case 'b':
        		temp = flags & 0x20000;
				if(temp > 0)
					flags &= 0xdffff;
				else
					flags |= 0x20000;
				break;
        	case 'i':
				temp = flags & 0x40000;
				if(temp > 0)
					flags &= 0xbffff;
				else
					flags |= 0x40000;
  				break;
        	case 'u':
        		temp = flags & 0x80000;
        		if(temp > 0)
					flags &= 0x7ffff;
				else
					flags |= 0x80000;
				break;
        	case 'q':
        		printf("Bye!\n");
        		exit(0);
				break;
			case '\n':
				printf("detected enexpected '\\n'.\n");
				break;
			default:
				printf("Unexpected error occurs, please check your input.\n");
				break;
		}
		while(getchar() != '\n')    //放到这里处理，就是正常的
		{
			continue;
		}
		show(flags);
		showmenu();
    }
}

void show(unsigned long flag)
{
    char ali_str[7];
    unsigned int id, fontsize, ali, bold, italic, underline;

	id = flag & 0xff;
	fontsize = (flag & 0x07f00) >> 8;
	ali = (flag & 0x18000) >> 15;
	bold = (flag & 0x20000) >> 16;
	italic = (flag & 0x40000) >> 17;
	underline = (flag & 0x80000) >> 18;
   switch(ali)
   {
        case 0:
            strcpy(ali_str, "Left");
            break;
        case 1:
            strcpy(ali_str, "Center");
            break;
        case 2:
            strcpy(ali_str, "Right");
            break;
   }

    printf("ID SIZE ALIGNMENT B I U\n");
    printf("%d %d %s %s %s %s\n", id, fontsize, ali_str, oo(bold),
                oo(italic), oo(underline));
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
