//1 ^2 – 2 ^3 + 3 ^2 – 4^ 3 + …………………..NP , where P=2 ,if N is odd otherwise P=3, if N is even.

#include <stdio.h>
#include<math.h>
int series(int x)
{
    int p=2,f=1;
    if(x%2==0)
    {
     p=3,f=-1;
    }
    else
    {
        p=2,f=1;
    }
    if(x==1)
    return 1;
    else
    return(f*pow(x,p)+series(x-1));
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",series(n));
    
}
