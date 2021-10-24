
//sum of series 1^2 - 2^2 + 3^3 - ..................................................................................

#include<stdio.h>
int s(int n)
{
    static int i=1,sign=1,sum=0,sum1=0,Tsum=0;
    if(i<=n)
    {
        if(i%2==0)
        {
            sum+=i*i;
        }
        else
        {
            sum1+=i*i;
        }
        i++;
        s(n);
    }
    Tsum=sum1-sum;
    return Tsum;
}
int main()
{
    int n;
    printf("Enter Value for n : ");
    scanf("%d",&n);
    printf("\nSum = %d",s(n));
    return 0;
}
