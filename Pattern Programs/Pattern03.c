//Floyd's triangle

#include<stdio.h>
int main()
{int rows,k=0;
	printf("ENTER NUMBER OF ROWS->" );
	scanf("%d",&rows);
	for(int i=0;i<=rows;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d  ",k++);
		}
		printf("\n");
	}
	printf("\n AND HERE IT IS FLOYD'S TRIANGLE" );
	return 0;
	
}
