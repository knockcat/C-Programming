#include<stdio.h>
int main()
{
int num,r,length,breadth;
	float PI=3.142,area;
	printf("ENTER A NUMBER:");
	scanf("%d",&num);	
if(num>0)
	{printf("\nENTER RADIUS OF CIRCLE=>");
		scanf("%d",&r);
		area=PI*r*r;
		printf("AREA OF CIRCLE=>%0.2f",area);
	}	
	else if(num<0)
	{printf("\nENTER LENGTH OF RECRANGLE=>");
		scanf("%d",&length);
		printf("\nENTER BREADTH OF RECRANGLE=>");
		scanf("%d",&breadth);
		area=length*breadth;
		printf("AREA OF RECTANGLE=>%0.2f",area);
	}
	else
	printf("INVALID CHOICE");
	return 0;
}

