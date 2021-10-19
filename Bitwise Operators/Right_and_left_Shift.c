
/*right shift*/
#include<stdio.h>
int main()
{
	int num,bits,right,left;
	
	scanf("%d%d", &num ,&bits);
	right=num>>bits;
	
	
	left=num<<bits;
	
	
	printf("\n %d after right shifting %d bits is %d ",num,bits,right);
	
	printf("\n %d after left shifting %d bits is %d ",num,bits,left);
	return 0;
}
