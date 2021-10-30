//program to test whether a given matrix is symmetric or not
#include<stdio.h>

int main()
{int i, j, a[10][10], b[10][10], n, temp;
    printf("\nEnter the dimension of the matrix: \n\n");
    scanf("%d", &n);
    
    printf("\nEnter the %d elements of the matrix: \n\n",n*n);
    for(i = 0; i < n; i++) 
        for(j = 0; j < n; j++) 
            scanf("%d", &a[i][j]);
    
    for(i = 0; i < n; i++) 
        for(j = 0; j < n; j++) 
            b[j][i] = a[i][j];
            
            printf("\n\nThe original matrix is: \n\n");
    for(i = 0; i < n; i++)   
    {
        for(j = 0; j < n; j++)   
        {
            printf("%d\t", a[i][j]);
        }
    printf("\n");
    }
    
    printf("\n\nThe Transpose matrix is: \n\n");
    for(i = 0; i < n; i++) 
    
    {
        for(j = 0; j < n; j++)   
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < n; i++)   
    {
        for(j = 0; j < n; j++)   
        {if(a[i][j] != b[i][j]) 
            {
                printf("\n\nMatrix is not Symmetric\n\n");
                return 0;
                   
            }
        }
    }
    printf("\n\nMatrix is Symmetric\n\n");
    
    return 0;
}
