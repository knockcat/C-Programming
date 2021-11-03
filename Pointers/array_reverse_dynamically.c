#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,temp;
	printf("enter size of array:");
	scanf("%d",&n);
	int *ptr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	i=0;
	j=n-1;
	while(i<j)
	{
		temp=ptr[i];
		ptr[i]=ptr[j];
		ptr[j]=temp;
		i++;
		j--;
	}
	printf("rev:");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
	return 0;
}
