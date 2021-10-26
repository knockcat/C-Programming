//program test whether a given matrix of order MxN is an upper - triangular matrix or not.
#include<stdio.h>
#define row 50
#define col 50
/*00 01 02
  10 11 12
  20 21 22*/
		
int main()
{
int a[row][col],i,j,r,c,isupper=0;

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
	
		for(i=0;i<r;i++)
		{
			for(j=0;j<i;j++)
			{
				if(a[i][j]==0)
				isupper=0;				
				else
				isupper=1;
			}	
		}
		
		if(isupper==0)
		{
			printf("INPUTTED MATRIX IS A UPPER TRIANGULAR MATRIX:");
		}
		else
		{
			printf("INPUTTED MATRIX IS NOT A UPPER TRIANGULAR MATRIX:");
		}
		
		return 0;	
}
