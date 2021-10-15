//calc s.i through function
#include<stdio.h>
int simple_interest();

int main()
{
	simple_interest();
	
}

int  simple_interest()
{
	int p,r,t;
	float si;
	printf("ENTER VALUE OF P , R , T => ");
	scanf("%d%d%d",&p,&r,&t);
	
	si=(p*r*t)/100;
		printf("SIMPLE INTEREST=> %6.2f",si);
}
