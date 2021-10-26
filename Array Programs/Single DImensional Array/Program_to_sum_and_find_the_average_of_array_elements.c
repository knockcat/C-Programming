//program to find the sum and average of given N elements in an array. 
#include<stdio.h>

int main()
{
	int num,sum,i;
	printf("VISHAL JOSHI   SEC-E");
	
	printf("\nENTER SIZE OF ARRAY->");
	scanf("%d",&num);
	int array[num];
	printf("\nENTER VALUES-\n");
	for(i=0;i<num;i++)
	{
		printf("\nENTER NUMBER->");
		scanf("%d",&array[i]);
		sum=sum+array[i];
	}
	
	float avg=(float)sum  /  num;
	
	printf("\nSUM OF NUMBERS IN THE ARRAY- %d" ,sum);
	printf("\nAVG OF NUMBERS IN THE ARRAY- %6.2f" ,avg);
	
}
