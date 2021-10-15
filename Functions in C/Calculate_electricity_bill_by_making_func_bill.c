//bogilal
float tot_bill(int,float);
#include<stdio.h>

	int main()
	{
		int year;
		float bill;
		printf("enter years the customer known to bogilal=>");
		scanf("%d",&year);
		printf("enter bill=>");
		scanf("%f",&bill);
		
		tot_bill(year,bill);
	
		return 0;
		
	}
	
	
	float tot_bill(int year,float bill)
	{
		
		float tot_bill;
		if((year>3) && bill>600)
		 tot_bill= bill-(12*bill)/100;
		
		else if((year>3)  && bill<600)
		tot_bill=bill-(7*bill)/100;
		
		else
		 tot_bill=bill;
		
		printf("\nTotal Bill=>  %6.2f",(tot_bill));
	}

