//program using a function name SWAP to exchange two numbers without using a temporary variable. Accept the numbers in the main program and display their swapped values to the console in the calling program itself.
#include<stdio.h>
void swap(int *p1,int *p2)

	{
		*p1=*p1+*p2;
		*p2=*p1-*p2;
		*p1=*p1-*p2;

	}
	
int main()
	{
	int num1=101,num2=202;
	printf("VISHAL JOSHI SEC-E\n\n");
	
	printf("VALUE before SWAPPING of num1 is %d  and  num2 is %d \n",num1,num2);
	
	swap(&num1,&num2);
	
	printf("\nVALUE AFTER SWAPPING num1 becomes %d  num2 becomes %d",num1,num2);
	return 0;	
	}
