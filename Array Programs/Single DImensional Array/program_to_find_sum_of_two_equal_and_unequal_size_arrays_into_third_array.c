//program to find sum of two equal and unequal size arrays into third array
#include<stdio.h>
#define max 100
int main()
{
printf("VISHAL JOSHI  SEC-E");
int num1,num2,i;
	printf("\nENTER SIZE OF ARRAY 1->");
		scanf("%d",&num1);
	printf("ENTER SIZE OF ARRAY 1->");
	scanf("%d",&num2);
			int a1[num1],a2[num2],c[max];
	printf("ENTER ELEMENTS OF 1st ARRAY->\n");

				for(i=0;i<num1;i++)
					scanf("%d",&a1[i]);
printf("ENTER ELEMENTS OF 2nd ARRAY->\n");
				for(i=0;i<num2;i++)
				scanf("%d",&a2[i]);
	if(num1>=num2)
	{
		for(i=0;i<num1;i++)
		{
		 c[i]=a1[i]+a2[i];
		}
	}
	else
	{
	for(i=0;i<num2;i++)
		{
		 c[i]=a1[i]+a2[i];
		}
	}
printf("OUTPUT OF ADDITION OF a1[num1] + a2[num2] :\n");
if(num1>=num2)
	{
		for(i=0;i<num1;i++)
		{
		printf(" \n%d",c[i]);
		}
	}
	else
	{
	for(i=0;i<num2;i++)
		{
		printf(" \n%d",c[i]);
		}
	}
		return 0;
}
