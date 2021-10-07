//TO FIND MINIMUM OF THREE NUMBERS (MENU-DRIVEN)
#include<stdio.h>
int main()
{

int a,b,c,opt,min;
printf("\n	ENTER VALUE FOR a,b&c=>\n");
scanf("%d%d%d",&a,&b,&c);

printf("\n	MENU DRIVEN PROGRAM FOR FINDING SMALLEST OF 3 NUMBERS");
printf("\n	1.USING IF_ELSE STATEMENT\n");
printf("\n	2.USING CONDITIONAL/TERNARY OPERATORS\n");
printf("\n	3.USING ARITHMETIC OPERATORS\n");
scanf("%d",&opt);

switch(opt)
{
	case 1:
		printf("\n	3 NUMBERS ENTERED ABOVE BY YOU ARE=%d,%d,%d",a,b,c);
		
		min=a;
		if(min>b)
		min=b;
		else if(min>c)
		min=c;
		printf("\nMINIMUM OF 3 NUMBER IS=>%d",min);
	break;

	case 2:
		printf("\n	3 NUMBERS ENTERED ABOVE BY YOU ARE=%d,%d,%d",a,b,c);
		min=(a<b)?(a<c?a:c):(b<c?b:c);
		
	printf("\n	\n	MINIMUM OF 3 NUMBER IS=>%d",min);
	break;
	
	case 3:
		printf("\n	3 NUMBERS ENTERED ABOVE BY YOU ARE=%d,%d,%d",a,b,c);
		if(!(b/a))   //same as if(b<a)
		{
			min=(!(b/c))?b:c;
		}
		else
		{
			min=(!(a/c))?a:c;
		}
		printf("\nMINIMUM OF 3 NUMBER IS=>%d",min);
		break;
		
		default:
			printf("INVALID OPTION");
}



return 0;
}
