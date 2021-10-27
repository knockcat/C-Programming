#include<stdio.h>
int main()
{
    int n;
    int ib=0;
    int fb=0;
    printf("enter bill amount");
    scanf("%d",&n);
    if (n>=5000)
    {
       ib=n-((0.25)*n);
    }
    else if (n>=2500 || n<5000)
    {
        ib=n-((0.15)*n);
    }
    else
    {
        ib=n;
    }
    fb=ib+((0.025)*ib);
    printf("final bill is %d",fb);
}
