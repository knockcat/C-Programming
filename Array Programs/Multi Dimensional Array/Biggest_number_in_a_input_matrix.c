//program to find the biggest element of a given matrix of order M x N accepted from the user.
#include<stdio.h>
#define row 50
#define col 50
int main()
{
int a[row][col],i,j,r,c,lar;

printf("VISHAL JOSHI   SEC-E\n");

printf("ENTER ROW AND COLUMN FOR MATRICES-:");
scanf("%d%d",&r,&c);

printf("\nENTER ELEMENTS FOR MATRICES->\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n------------------INPUTTED MATRIX:----------------\n");
	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}	
		lar=a[0][0];	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j] > a[0][0])
			lar=a[i][j];
		}
	}
	
	printf("\nLARGEST ELEMENT IN THE IMPUTTED MATRIX-> %d",lar);
	
	return 0;
}
		
