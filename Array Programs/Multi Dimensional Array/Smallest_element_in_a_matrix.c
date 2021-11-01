//smallest element in a matrix
#include<stdio.h>
int main()
{
	int r, c;
printf("VISHAL JOSHI SEC-E\n\n\nEnter no. of rows and column of the matrix->\n");
	scanf("%d%d",&r,&c);
	
	int a[r][c];
	
	int i,j,small;
	printf("Enter elements of matrix\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		scanf("%d",&a[i][j]);
	}
	printf("\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
		printf("%d  ",a[i][j]);
		}
		printf("\n");	
	}
	
	small = a[0][0];
for(i=0; i<r; i++)
	{ 
		for(j=0; j<c; j++)
		{
			if(a[i][j] < small)
			small = a[i][j];
		}
		
	}
	
	printf("Smallest element of the inputted matrix is --> %d",small);
	
	return 0;
}
