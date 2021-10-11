//SMALLEST OF THREE NUMBERS USING TERNARY OPERATOR

#include<stdio.h>
int main()
{
	int a,b,c,min,max;
	
	printf("ENTER VALUE FOR a-> ");
	scanf("%d",&a);
	
	printf("ENTER VALUE FOR b-> ");
	scanf("%d",&b);
	
	printf("ENTER VALUE FOR c-> ");
	scanf("%d",&c);
	
	min=(a<b)?(a<c?a:b):(b<c)?a:c;
	printf("\n   SMALLEST OF THREE NUMBERS->%d",min);
	
	max=(a>b)?(a>c?a:b):(b>c)?a:c;
	
	printf("\nLARGEST OF THREE NUMBERS->%d",max);
	
	return 0;
}
