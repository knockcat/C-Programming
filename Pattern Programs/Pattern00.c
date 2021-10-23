//pattern
/*
1
22   for n = 3;
33
*/
#include<stdio.h>
int main()
{
	int N;
	
	printf("ENTER LAST TERM->");
	scanf("%d",&N);
	
	for( int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",i);
			if(j==i)
			printf("\n");
		}
	}
	return 0;
}
