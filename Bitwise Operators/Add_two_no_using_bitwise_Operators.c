//add two number using bit-wise
#include<stdio.h>
int main()
{
	int x,y,carry;
	printf("\nENTER 2 NUMBERS:");
	scanf("%d%d",&x,&y);
	
	while(y!=0)
	{
		carry=x&y;
		x=x^y;
		y=carry<<1;
	}
	printf("\nSUM OF 2 NUMBERS:%d",x);
	return 0;
}
