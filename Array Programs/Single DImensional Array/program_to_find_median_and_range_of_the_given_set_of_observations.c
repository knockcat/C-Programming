//prgram to find median and range of the given set of observations (using functions).
#include<stdio.h>
int median_range(int N)
{
	  float a[N] , median;                                                 
 printf("Input %d values \n", N);  
 int i, j;                                             
 for(i=0; i<N; i++)                                                             
 {                                                                              
  scanf("%f", &a[i]);                                                           
 }                                                                              
   printf("\n");                                                                             
float temp =0;                                                                        
    //sorting the array                                                       
 for(i=0;i<N-1;i++)                                                             
 {                                                                              
   for(j=0; j<N-i-1; j++)                                                       
   {                                                                            
    if(a[j]>=a[j+1])                                                             
    {                                                                           
     temp = a[j];                                                               
     a[j] = a[j+1];                                                             
     a[j+1] = temp;                                                             
    }                                                                           
   }                                                                            
 }                                                                              
                                                                                
                                                                                
           //calculating median                                          
 if( N%2 == 0)                                                                  
  median = (a[(N/2)-1]+a[(N/2)])/2.0;                                           
 else                                                                           
  median = a[(N/2)];                                                            
    
	
	float big = a[N-1];
	float small= a[0] ;
	
	float range = big - small;                                                                           
                                                           
                                                                                
 for(i=0; i<N; i++)                                                             
  printf("%f\t", a[i]);                                                         
                                                                                
 printf("\n\nMedian is %f\n", median);    
 printf("\n\nrange is %f\n", range);  
                                       
}           



int main()
{
	int N;
	printf("VISHAL JOSHI SEC-E\n\n\nenter the no of observation you want to enter \n");
	scanf("%d",&N);
	median_range(N);
}
