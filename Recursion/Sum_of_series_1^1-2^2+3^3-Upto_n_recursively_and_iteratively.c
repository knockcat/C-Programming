//series recur and iterative approach
#include<stdio.h>
int itrs(int n)
{
     static int i=1,SO=0,SE=0,Tsum=0;
     while(i<=n)
     {
        if(i%2==0)
           SE+=i*i;
        else
           SO+=i*i;
        i++;
     }
     Tsum=SO-SE;
     return Tsum;

}
int recs(int n)
{
    static int i=1,SO=0,SE=0,Tsum=0;
    if(i<=n)
    {
        if(i%2==0)
            SE+=i*i;
        else
            SO+=i*i;
        i++;
        recs(n);
    }
    Tsum=SO-SE;
    return Tsum;
}
int main()
{
    int n;
    printf("ENTER LAST TERM:");
    scanf("%d",&n);
    printf(" recursion:%d\n itration:%d",recs(n),itrs(n));
    return 0;
}
