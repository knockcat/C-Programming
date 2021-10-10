// Program for print prime 
// number in given range 

#include<stdio.h>
int main()
{
	int N, i,j,flag=0;
	
	printf("ENTER RANGE LIMIT UPTO->");
	scanf("%d",&N);
	
	for (i = 1; i <= N; i++) 
	{ 
	if (i == 1 || i == 0) 
            continue; 
            
            flag=1;
            
        for (j = 2; j <= i / 2; j++) 
		{ 
            if (i % j == 0) 
			{ 
                flag = 0; 
                break; 
			}
		}
     
        if (flag == 1) 
            printf("%d ", i); 
            
 	}
 	return 0;
 }

