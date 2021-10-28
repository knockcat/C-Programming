/*1.	Write a C program to implement a recursive function to find the sum of digits of a number N 
by accepting it in the main program.*/
#include<stdio.h>
int SumDigit(int n)
{
    if(n==0)
        return 0;
    else
        return n%10+SumDigit(n/10);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("sum of digit of %d is:%d",n,SumDigit(n));
    return 0;
}
