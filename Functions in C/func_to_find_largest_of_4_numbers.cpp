//function
#include<stdio.h>
int big(int n1,int n2)

{
	if(n1>n2)
	return n1;
	else
	return n2;
}
	
	int main()
	{
		int n1,n2,n3,n4;
		printf("ENTER 4 NUMBERS=>\n");
		scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
		int a=big(n1,n2);
		int b=big(n3,n4);
		int max=(a,b);
		printf("\nBIGGEST NUMBER=>%d\n",max);
		
		return 0;
	}
