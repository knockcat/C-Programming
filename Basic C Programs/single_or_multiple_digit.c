//CHECK WHETHER ENTERED NUMBER IS SINGLE OR MULTI DIGIT
#include<stdio.h>
int main()
{
	int num;
	printf("ENTER A NUMBER=>");
	scanf("%d",&num);
	if(num>9||num<-9)
	{
		printf("\n%d IS MULTI DIGIT:",num);
	}
	else
	printf("%d IS SINGLE DIGIT",num);
	return 0;
}
