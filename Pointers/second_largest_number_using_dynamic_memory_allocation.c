//program to find second largest number usind dynamic memory allocation
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main(){
    int n;
    printf("VISHAL JOSHI SEC-E\n\n\nEnter no. of elements\n");
    scanf("%d", &n);
    int *ptr;
    int i;
    ptr = (int *)malloc(n * sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not available\n");
        exit(1);
    }
    int large = INT_MIN;
    int slarge = INT_MIN;
    for( i = 0; i < n;i++)
       { scanf("%d", ptr + i);
         if (large<*(ptr+i))
           {  slarge = large;
             large = *(ptr + i);}
         else if(slarge<*(ptr+i))
              slarge=*(ptr + i);
       }
       printf("The seconf largest no. is %d", slarge);
       return 0;
}
