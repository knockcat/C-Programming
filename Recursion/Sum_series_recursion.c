#include<stdio.h>
int seriesrecursion(int N,int sign)
{
    if(N==1)
    return 1;
    else
    return (N*N)*sign+seriesrecursion(N-1,-sign);
}
int main()
{
    int N,sign=1;
    printf("Enter value of N ");
    scanf("%d",&N);

    if(N%2==1)
    sign=1;
    else
    sign=-1;
    printf("The sum of series is : %d (Using recursion)",seriesrecursion(N,sign));
}
