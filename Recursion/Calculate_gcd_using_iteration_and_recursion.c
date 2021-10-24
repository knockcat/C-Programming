//gcd of 2 numbers using recursion and iteration

#include <stdio.h>
 
int hcf(int a, int b) //iteration
{
    while (a != b) {
        if (a > b)        
            a = a - b;        
        else       
            b = b - a;        
    }
    return a;

}

 int gcd(int a, int b)	//recursion
 {
 	if(a==0)
 	return b;
 	
 	if(b==0)
 	return a;
 	
 	if(a>b)
 	return gcd(a%b,b);
 	
 	if(b>a)
 	return gcd(a,b%a);
	
 }
 
 int main()
 {
 	
 	int a,b;
 	printf("ENTER 2 POSITIVE NUMBERS->");
 	scanf("%d%d",&a,&b);
 	
 	printf("\ngcd of %d and %d is %d  through recursion",a,b,gcd(a,b));
 	printf("\nlcm of %d and %d is %d through recursion",a,b,((a*b)/gcd(a,b)));
 	printf("\ngcd of %d and %d is %d  through iteration",a,b, hcf(a, b));
 	printf("\nlcm of %d and %d is %d through iteration",a,b,((a*b)/hcf(a,b)));
 	return 0;
 }
