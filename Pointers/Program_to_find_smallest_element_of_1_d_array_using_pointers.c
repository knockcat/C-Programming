//program to find smallest element of a single dimensional array using pointers.
#include <stdio.h>
int main() 
{
    int array[100], *small, size, i;
    
    printf("VISHAL JOSHI SEC-E\n\n");
 
    printf("Enter the number of elements in array\n");
    scanf("%d",&size);
 
    printf("Enter %d integers\n", size);
 
    for ( i = 0 ; i < size ; i++ )
        scanf("%d", &array[i]);
 
    small = array;
    *small = *array;
 
    for ( i = 1 ; i < size ; i++ ) 
    {
        if ( *(array+i) < *small ) 
        {
           *small = *(array+i);
           
        }
    } 
 	printf("Smallest element in the array is -> %d",*small);
    return 0;
}
