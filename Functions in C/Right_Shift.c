//right shift
int right_shift(int num, int n_bits);
#include<stdio.h>

int main()
{
	int num ,n_bits;
	printf("ENTER NUMBER TO BE SHIFTED RIGHT >> ");
	scanf("%d",&num);
	printf("NUMBER TO BITS TO BE SHIFTED  >> ");
	scanf("%d",&n_bits);
	
	right_shift(num,n_bits);

	return 0;
}

int right_shift(int n, int bits)
{
	printf("%d AFTER SHIFTING %d BITS -> %d ",n,bits,n>>bits);

}
