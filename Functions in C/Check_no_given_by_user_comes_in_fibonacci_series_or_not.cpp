//to check if N number given by user is present in fibbonacci or not

#include<stdio.h>
 int isnumpresent(int n,int num)
{
   int a=0, b=1, c;
   for(int i=0; i<n; i++)
   {
   	 
    
     printf("%d\t", a);
     c = a+b;
     a = b;
     b = c;
    if(a==num)
   {
   printf("\n%d exist in the series...",a);
   printf("\n\nwhole series will not printed beacause the program hault as soon as a becomes equal to n, therefore after that series will not print");
   return 1;
	}
   }
   
}

int main()
{
   int term,num;
	
   printf("Enter the term: ");
   scanf("%d", &term);
   printf("Enter number to be check:");
   scanf("%d",&num);
   
   printf("The fibonacci series is: \n");

   isnumpresent(term,num);

   
}
