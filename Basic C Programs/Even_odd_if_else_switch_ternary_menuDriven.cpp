//TO CHECK GIVEN NUMBER IS EVEN OR ODD
#include<stdio.h>
int main()
{

int opt,num,rem;

printf("MENU DRIVEN PROGRAM:\n");
printf("\n1. THROUGH IF ELSE:");
printf("\n2. THROUGH SWITCH-CASE:");
printf("\n3. THROUGH TERNARY OPERATORS:\n");
printf("\nENTER YOU OPTION AS ABOVE:\n");
scanf("%d",&opt);
switch(opt)
{
	case 1:
	printf("\nTHE PROGRAM WILL EXECUTE THROUGH IF-ELSE");
	printf("\nENTER A NUMBER:");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf(" \nGIVEN NUMBER IS AN EVEN NUMBER");
	}
	else
	
	{
			printf("\nGIVEN NUMBER IS AN ODD NUMBER");
	}
	break;
	
	case 2:
	printf("\nTHE PROGRAM WILL EXECUTE THROUGH SWITCH CASE");
	printf("\nENTER A NUMBER:");
	scanf("%d",&num);
	rem=num%2;
	switch(rem)
	{
	
	case 0:
	if(rem=0);	
		printf(" \nGIVEN NUMBER IS AN EVEN NUMBER");
	break;
	
	case 1:
	printf("\nGIVEN NUMBER IS AN ODD NUMBER");
	break;
	}
	break;
	
	case 3:
	printf("\nTHE PROGRAM WILL EXECUTE THROUGH TERNARY_OPERATORS:");
	 printf("\nENTER A NUMBER:\n");  
    scanf("%d",&num);  

    (num%2==0)?  
    (printf("%d is Even number\n",num)):  
    (printf("%d is Odd  number\n",num));  
  break;
  default:
  	printf("\nINVALID OPTION");
  	break;
}

	

}

