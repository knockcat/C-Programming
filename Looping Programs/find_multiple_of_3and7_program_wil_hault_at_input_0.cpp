/*wacp to accept +ve no and print mul of 3&7:
 program will goona hault as soon as user enters -ve no... */

#include<stdio.h>
int main()
{
	int num=1;
			
	while(num>=0)
	{	
	
	printf("\nENTER A +ve NUMBER=> "); 
		scanf("%d",&num);
			
		if(num%3==0 && num%7==0)
		{
			printf( "\n  %d  MULTIPLE OF BOTH 3 AND 7 \n",num);
		}
		
	
	}
	printf("\nPROGRAM CLOSES DUE TO INPUTTING A -ve NUMBER  ....");
	
	return 0;
}

