//program to merge two sorted array so that the resulting array will also be sorted.
/*#include <stdio.h>
#include<stdlib.h>
int merge_arrays(int arr1[], int arr2[], int arr3[], int m, int n)
{
int i,j;
for(i = 0; i < m; i++)
{
arr3[i] = arr1[i];
}
for(i = m, j = 0 ; i < m + n; i++, j++)
{
arr3[i] = arr2[j];
}
}
int main()
{
int n,m,j;
printf("\nEnter the size of Array 1 : ");
scanf("%d",&m);
printf("\nEnter the size of Array 2 : ");
scanf("%d",&n);
int arr1[m],arr2[n];
int arr3[m+n];
int i;
printf("\nInput the Array 1 elements : ");
for(i = 0; i<m;i++)
{
scanf("%d",&arr1[i]);
}
printf("\nInput the Array 2 elements : ");
for(i = 0;i<n;i++)
{
scanf("%d",&arr2[i]);
}
merge_arrays(arr1,arr2,arr3,m,n);
printf("\nThe Merged Sorted Array : ");
for(i = 0; i < m+n-1; i++)
{
for(j = 0; j < m+n-i-1; j++)
{
if(arr3[j] > arr3[j + 1])
{
int temp = arr3[j];
arr3[j ] = arr3[j + 1];
arr3[j + 1] = temp;
}
}
}
for(i = 0; i < n + m; i++)
{
printf("%d ",arr3[i]);
}
printf("\n");
return 0;
}*/

#include <stdio.h>
    void main()
    {
 
        int array1[50], array2[50], array3[100], m, n, i, j, k = 0;
        printf("\n Enter size of array Array 1: ");
        scanf("%d", &m);
 
        printf("\n Enter sorted elements of array 1: \n");
        for (i = 0; i < m; i++) 
        {
            scanf("%d", &array1[i]);
        }
 
        printf("\n Enter size of array 2: ");
        scanf("%d", &n);
 
        printf("\n Enter sorted elements of array 2: \n");
        for (i = 0; i < n; i++) 
        {
            scanf("%d", &array2[i]);
        }
 
        i = 0;
        j = 0;
 
        while (i < m && j < n) 
        {
            if (array1[i] < array2[j]) 
            {
                array3[k] = array1[i];
                i++;
            }
 
            else 
            {
                array3[k] = array2[j];
                j++;
            }
            k++;
        }
 
        if (i >= m) 
        {
            while (j < n) 
            {
                array3[k] = array2[j];
                j++;
                k++;
            }
        }
 
        if (j >= n) 
        {
            while (i < m)
            {
                array3[k] = array1[i];
                i++;
                k++;
            }
        }
 
        printf("\n After merging: \n");
        for (i = 0; i < m + n; i++) 
        {
            printf("\n%d", array3[i]);
        }
 
    }
