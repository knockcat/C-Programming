//CHECK GIVEN NUMBER IS EVEN OR ODD (SWITCH)
#include<stdio.h>
int main()
{
	int num,rem;
	printf("ENTER A NUMBER:");
	scanf("%d",&num);
	rem=num%2;
	switch(rem)
{
	
	case 0:	
		printf(" GIVEN NUMBER IS AN EVEN NUMBER");
	break;
	
	case 1:
	printf("GIVEN NUMBER IS AN ODD NUMBER");
	break;
}
	return 0;
}
