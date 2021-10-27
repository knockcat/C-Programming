// VISHAL JOSHI SEC E 20011368
#include<stdio.h>
#include<math.h>

int main(){
    float sample,lvalid,fvalid,avg,sum=0,prod,sqareroot;
    int n,count=0;
    printf("Enter no. of samples to be checked\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    { 
      scanf("%f",&sample);
      if(sample>0)
      sum=sum+sample;
      if(sample>=21.5 && sample<=69.5)
        if(count==0)
      {  fvalid=sample;
        count++;}
        else 
        lvalid=sample;

    }
  avg=(fvalid+lvalid)/2;
  sum=sum-fvalid-lvalid;
 prod=sum*avg;
sqareroot=sqrt(prod);
if(sqareroot<100)
printf("The batch is accepted\n");
else
  printf("The batch is rejected\n");
    return 0;
}
