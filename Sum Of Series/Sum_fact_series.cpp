//fact series
#include<stdio.h>
int main()
{
	int sign=1,i=0,j,N=10;
double sum=0.0; float f,term=1;
	
	for(i=1;i<=N;i++)
	{
		f=1;
		for(j=1;j<=i;j++)
		{
			f=f*j;
		}
		term=(i/f);
		sum=sum+term;
		sign=sign*-1;
	}
	printf("sumof %d terms is %6.2f ",N,sum);
	return 0;
}
