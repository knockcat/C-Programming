// code to sum odd and even number seperately b/w 1 to N using for loop and while loop
#include<stdio.h>
int main()
{
	int n,sum=0,evsum=0,oddsum=0,evsum1=0,oddsum1=0,j=1 ;
	printf("ENTER RANGE 1 T0=>");
	scanf("%d",&n);

	printf("\nUSING FOR LOOP>>>");
	//for-loop
	
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		evsum=evsum+i;
		
		else
		oddsum=oddsum+i;
	}
	printf("\nSUM OF EVEN NUMBER IN GIVEN RANGE USING FOR LOOP=>%d \n", evsum);
	printf("\nSUM OF ODD NUMBER IN GIVEN RANGE USING FOR LOOP=>%d \n", oddsum);
	
	
	printf("\nUSING WHILE LOOP>>>");
	//while-loop
	
	while(j<=n)
	{
		if(j%2==0)
		{
		evsum1=evsum1+j;
		
		}
	    else
		{
		oddsum1=oddsum1+j;
		}	
		j++;
	}
	printf("\nSUM OF EVEN NUMBER IN GIVEN RANGE USING WHILE LOOP=>%d\n ", evsum1);
	printf("\nSUM OF ODD NUMBER IN GIVEN RANGE USING WHILE LOOP=>%d \n", oddsum1);
	
	
	
	return 0;
}
