//code to enter a 4 digit number and sum its digits...
#include<stdio.h>

	int main()
	{
		int num,sum,i=1;
		printf("\nENTER A FOUR DIGIT NUMBER=>");
		scanf("%d",&num);
		if(num>999 && num<10000)
		{
			while(i<=4)
			{
			sum= sum+num%10;
			num=num/10;
			i++;
			}
			printf("SUM OF ENTERED FOUR DIGIT NUMBER>>%d",sum);
		}
		else
		 printf("ENTERED NUMBER IS NOT A FOUR DIGIT NUMBER...");
		 
		 return 0;
		
	}

