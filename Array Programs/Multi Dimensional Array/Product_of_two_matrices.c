//program to find product of two matrices of order M x N and P x Q accepted from the user.
#include<stdio.h>
#define row 50
#define col 50
/*00 01 02
  10 11 12
  20 21 22*/
		
int main()
{
int a[row][col],b[row][col],ab[row][col],i,j,r,c,m,n,k;

printf("VISHAL JOSHI   SEC-E\n");

printf("ENTER ROW AND COLUMN FOR MATRIX 1-:");
scanf("%d%d",&r,&c);
printf("ENTER ROW AND COLUMN FOR MATRIX 2-:");
scanf("%d%d",&m,&n);

	if(c==m)
	{
		printf("\nENTER ELEMENTS FOR MATRIX 1->\n");

		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("\nENTER ELEMENTS FOR MATRIX 2->\n");

		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&b[i][j]);
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
		
		printf("\n------------------INPUTTED MATRIX:----------------\n");
		for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					printf("%d\t",b[i][j]);
				}
				printf("\n");
			}	
			
		for(i=0;i<r;i++)
		{
			for(j=0;j<n;j++)
				{
					ab[i][j]=0;
					for(k=0;k<m;k++)
						{
							ab[i][j]=ab[i][j]+a[i][k]*b[k][j];
						}
				}
		}
		printf("\n------------------PRODUCT MATRIX:----------------\n");
		for(i=0;i<r;i++)
			{
				for(j=0;j<n;j++)
				{
					printf("%d\t",ab[i][j]);
				}
				printf("\n");
			}	
	}
	
	else
		printf("MULTIPLICATION OF INPUTTED ORDER MATRICES IS NOT POSSIBLE");
	
  return 0;
}

