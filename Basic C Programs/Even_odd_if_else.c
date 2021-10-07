//CHECK GIVEN NUMBER IS EVEN OR ODD (IF-ELSE)
#include<stdio.h>
int main()
{
	int num;
	printf("ENTER A NUMBER:");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf(" GIVEN NUMBER IS AN EVEN NUMBER");
	}
	else
	{
			printf("GIVEN NUMBER IS AN ODD NUMBER");
	}
	return 0;
}
