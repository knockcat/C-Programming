#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float sum=0,first,last,average,product;
    printf("Enter the value of N:");
    scanf("%d",&n);
    float q[n];
    printf("Enter the values:");
    for(int i=0;i<n;++i){
        scanf("%f",&q[i]);
        if(q[i]>=21.5&&q[i]<=69.5)
         sum+=q[i];
    }
    for(int i=0;i<n;++i)
    {
       if(q[i]>=21.5&&q[i]<=69.5)
       {
           first=q[i];
           break;
       }  
    }
    for(int i=n-1;i>=0;--i)
    {
       if(q[i]>=21.5&&q[i]<=69.5)
       {
           last=q[i];
           break;
       }  
    }
    average=(first+last)/2;
    sum=sum-first-last;
    product=average*sum;
    
    printf("\n\nPRODUCT -> %f",product);
    if(sqrt(product)<100)
     printf("Batch Accepted\n");
    else
     printf("Batch Rejected\n");
     return 0;
}
