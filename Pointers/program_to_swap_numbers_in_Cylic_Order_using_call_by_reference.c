//program to swap numbersin Cylic Order using call by reference
#include<stdio.h>
int cyclic_swap(int *a,int *b, int *c)
{
	int temp ;       
	temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;	
		
}

int main()
{
	int a,b,c;
	printf("VISHAL JOSHI SEC-E\n\n\nEnter value for a b & c-\n");
	scanf("%d%d%d",&a,&b,&c);
	
printf("\nBEFORE SWAPPING a=%d  b=%d  c=%d",a,b,c);
	cyclic_swap(&a,&b,&c);
	
printf("\nAFTER SWAPPING  a=%d  b=%d  c=%d",a,b,c);
	
}
