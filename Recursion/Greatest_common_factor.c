/*write an recursive function gcd that returns
 the greatest common divisors of two ppositive integer accepted in the main program.*/
 
 #include<stdio.h>
 int gcd(int a, int b)
 {
 	if(a==0)
 	return b;
 	
 	if(b==0)
 	return a;
 	
 	if(a>b)
 	return gcd(a%b,b);//return gcd(a-b,b);
 	
 	if(b>a)
 	return gcd(a,b%a);//return gcd(a,b-a);
	
 }
 
 int main()
 {
 	
 	int a,b;
 	printf("ENTER 2 POSITIVE NUMBERS->");
 	scanf("%d%d",&a,&b);
 	
 	printf("gcd of %d and %d is %d",a,b,gcd(a,b));
 	return 0;
 }
