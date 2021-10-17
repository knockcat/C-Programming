// check for buzz number using functions..

#include<stdio.h>
int buzz_no(int);

int main()
{
	int num, ch;
	
	printf("ENTER A NUMBER->");
	scanf("%d",&num);
	
	
	if (buzz_no(num)==1)
	printf("\n%d is a buzz number",num);
	
	else
	printf("\n%d  is not a buzz number",num);
	
	
	
	return 0;
	
}

buzz_no(int x)
{
	int flag=0;
	if(x%10==7||x%7==0)
	return flag=1;
}


