// Sum of Series S = 1 - 1/3*3 + 1/5*5 - 1/7*7 ...1/N
#include <stdio.h>

int main ()
{
    int N ;
    
    printf("Enter the last Term of the Series \n");
    scanf("%d", &N);
    
    float sum = 0  ;
    int i = 1      ;
    short sign = 1 ;
    
    for ( i = 1 ; i <= N; i = i + 2)
     {
         sum = sum + 1.0 / (i*i)  * sign ;
         sign = sign * -1            ;
     }
     
    printf("sum is =  %f",sum);
    
    return 0;
}
