//frequency of each element of an array using pointers.
#include<stdio.h>
#include<limits.h>   
 void freq(int *p,int size){
    int narr[size];
    int *i = p;
    for (; i <p+size ; i++)
    { 
         int count = 1;
         if(*i==INT_MAX)
             continue;
             int *j = i+1;
       for(; j <=p+size ; j++)  
       { 
           
           if(*i==*j)
           { 
            count++;
           *j = INT_MAX;    
           }
        
         }
         printf("Frequency of %d is %d\n", *i, count);
    }  
}
int main(){
  printf("VISHAL JOSHI SEC-E\n\n\nEnter no. of elements\n");
    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    for ( i = 0;i < n;i++)
        scanf("%d", &arr[i]);
        freq(arr,n);
        return 0;
}

