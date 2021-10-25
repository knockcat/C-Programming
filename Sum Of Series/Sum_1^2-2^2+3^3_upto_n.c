// 1^2 - 2^2 + 3^2 - 4^2 ..................... n^n
#include <stdio.h>
#include <math.h>

int main()
{
    int n,sign=1,a;
    double term, sum=0;
    printf("enter the value of n =");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
          a=pow(i,2);
            sum=sum + a*sign;
            sign=sign*-1;
    }
    printf("sum of the series =%.2lf", sum);

}