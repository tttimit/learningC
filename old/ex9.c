#include <stdio.h>
int main(void)
{	
	char ch;
	
	while((ch = getchar()) != '#')
	{
	    if(ch == '\n')
		 	continue;
	    printf("Setp 1\n");
	    if(ch == 'c')
	    	continue;
        else if(ch == 'b')
            break;
        else if(ch == 'g')
            goto laststep;
        printf("Step 2\n");    	   
  	laststep:printf("Step 3\n");
	}	
	printf("Done\n");
	return 0;
}
/*
q
Setp 1
Step 2
Step 3
c
Setp 1
g
Setp 1
Step 3
b
Setp 1
Done
*/
