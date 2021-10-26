//program to find the sum of diagonal elements of a matrix of order MxN 
#include<stdio.h>
#define row 50
#define col 50
int main()
{
int a[row][col],i,j,r,c,suml=0,sumr=0;

printf("VISHAL JOSHI   SEC-E\n");

printf("ENTER ROW AND COLUMN FOR MATRICES-:");
scanf("%d%d",&r,&c);

if(r==c)
{
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
	
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(i==j)
				suml+=a[i][j];
			
			
				if((i+j)==(r-1))
				sumr+=a[i][j];
			}
		}
			
	printf("\nSUM OF PRINCIPAL DIAGNOL-> %d",suml);
	printf("\nSUM OF SECONDARY DIAGNOL-> %d",sumr);
}

	else
	printf("THIS DO NOT FORM A SQUARE MATRIX:");
	
	return 0;
}
/*00 01 02
  10 11 12
  20 21 22*/ 
 
 

		
