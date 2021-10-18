//prime number through function
// Function for print prime 
 

#include<stdio.h>
int isprime(int x);
int main()
{
	int N ;
	
	printf("Enter a number=>");
	scanf("%d",&N);
if (isprime(N)==1)
printf("%d is a prime number",N);
else
printf("%d is not a prime number ",N);

	
	return 0;
	
}
      int isprime(int x) 
	  {
		 int flag=1;     
        for (int i = 2; i <= x / 2; i++) 
		{ 
            if (x% i== 0) 
			{ 
                flag = 0; 
			}
			
		}return flag;
    
      }

