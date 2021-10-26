//program to insert an element into a list of elements in the Array 
#include<stdio.h>
int main()
{
	printf("VISHAL JOSHI  SEC-E");
	int n,num,p,i;
	printf("\nenter size of the array:");
	scanf("%d",&n);
	
	printf("enter a no:");
	scanf("%d",&num);
	
	printf("enter position:");
	scanf("%d",&p);
	
	int array[n+1];
	printf("enter value in array:\n");
	for( i=0;i<n;i++)
	{
		printf("enter :");
		scanf("%d",&array[i]);
	}
	for( i=n;i>p-1;i--)
	{
		array[i]=array[i-1];
	}
	array[p-1]=num;
	printf("after inserting:\n");
	for( i=0;i<n+1;i++)
	{
		printf("%d,",array[i]);
	
	}
	return 0;
}
