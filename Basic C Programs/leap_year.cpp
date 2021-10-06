//TO CHECK INPUT YEAR IS A LEZP YEAR OR NOT
#include<stdio.h>
int main()
{
	int year;
	printf("ENTER YEAR:");
	scanf("%d",&year);
	if(year%400==0 || year%100==0)
	{
		printf("\nINPUT YEAR IS NOT A LEAP YEAR");
	}

	else if(year%4==0)
	{
		printf("INPUT YEAR IS LEAP YEAR");
	}
	else
	{
		printf("INPUT YEAR IS NOT A LEAP YEAR");
	}
	return 0;
	
}
