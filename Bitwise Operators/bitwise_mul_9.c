//MULTIPLE OF 9 UISNG BITWISE

#include<stdio.h>
int main()
{
	int diff,n, carry, ctr=0,x=9,y=9;
	printf("Enter number:");
	scanf("%d",&n);
	
	while(x<=n)
	{
		y=9;
		
		while(y!=0)
		{
			carry=x&y;
			x=x^y;
			y=carry<<1;
		}
		diff=x^n;
		printf("x=%d diff=%d",x,diff);
		
		if(diff==0)
		{
			ctr++;
		}
		if(ctr>0)
		{
			printf("MULTIPLE OF 9");
		}
		else
		{
			printf("NOT A MULTIPLE OF 9");
		}
		return 0;
	}
}
