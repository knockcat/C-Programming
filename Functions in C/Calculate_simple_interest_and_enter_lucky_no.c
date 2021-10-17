//calculate SI and Enter Lucky Number
void simple_int(int,int,int);
void s_i(int);
void number(int);

#include<stdio.h>

int main()
{
int p,r,t;

printf("ENTER PRINCIPAL AMOUNT->");
scanf("%d",&p);
printf("ENTER RATE->");
scanf("%d",&r);
printf("ENTER TIME->");
scanf("%d",&t);

simple_int(p,r,t);

return 0;

}

void simple_int(int a,int b, int c)
{
 int	si=a*b*c/100;
s_i(si);	

}

void s_i(int z)
{
	int ch;
	printf("\nSIMPLE INTEREST->%d",z);
	
	printf("\nENTER YOUR LUCKY NUMBER->");
	scanf("%d",&ch);
	
	number(ch);
}

void number(int v)
{
	printf("\nYOUR ENTERED NUMBER: %d",v);
}
