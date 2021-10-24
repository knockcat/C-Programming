//npr     Permutation
#include<stdio.h>
int fact(int n)
{
    int fact=1;
    while(n!=1)
    {
        fact*=n;
        n--;
    }
    return fact;
}
int npr(int n,int r)
{
    int npr;
    npr=fact(n)/fact(n-r);
    return npr;
}
int main()
{
    int n,r;
    printf("ENTER n  and r :");
    scanf("%d%d",&n,&r);
    if (n>r)
        printf("%d",npr(n,r));
    else
        printf("not possible");
    return 0;
}
