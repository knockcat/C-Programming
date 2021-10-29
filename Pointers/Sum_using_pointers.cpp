//use pointers and functions
#include<stdio.h>
int sum(int,int);

	int main()
	{
	int a ,b;
	int *ptr=&a, *qtr=&b;
	printf("ENTER 2 VALUES->");
	scanf("%d%d",ptr,qtr);
	sum(*ptr,*qtr);
	
	return 0;
	
	}

int sum(int x,int y)
{
	int sum=x+y;
		printf("sum=>%d",(sum));
}
