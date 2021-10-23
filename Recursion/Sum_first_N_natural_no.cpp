/*1.Write a C program to implement a recursive function to sum the first N natural numbers by accepting 
the value of N in the calling program.*/

#include<stdio.h>
int sum(int);

int main()
{
	int num;
	
	printf("ENTER THE LAST NUMBER-> ");
	scanf("%d",&num);
	
	printf("sum=> %d",sum(num));
	
	return 0;
}

int sum(int a)
{
	
	if (a==1)
	return 1;
	
	else
	return a+sum(a-1);
	
	
	
}


/*#include<stdio.h>
int sum(int n)
{
    if(n==1)
        return 1;
    else
        return n+sum(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("sum=%d",sum(n));
    return 0;
}*/
