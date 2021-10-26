//program to find biggest and smallest element of an array with N elements.
#include<Stdio.h>
int main()
{int num,i,small, large;
	printf("VISHAL JOSHI   SEC-E");
	printf("\nENTER SIZE OF ARRAY->");
	scanf("%d",&num);
	int array[num];
	for(i=0;i<num;i++)
	{
		printf("\nENTER NUMBERS->");
		scanf("%d",&array[i]);
	}
	large=small=array[0];
	for(i=0;i<num;i++)
	{
		if(array[i]>large)
		large=array[i];
		
		if(array[i]<small)
		small=array[i];
	}
	
	printf("\nSMALLEST NUMBER IS-> %d",small);
	printf("\nLARGEST NUMBER IS-> %d",large);
	
	
}
