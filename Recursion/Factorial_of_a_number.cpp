/*2.	Write a C program to implement a recursive function to compute the factorial of a number N by accepting 
it in the main program.*/
#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("factorial of %d is:%d",n,fact(n));
    return 0;
}
