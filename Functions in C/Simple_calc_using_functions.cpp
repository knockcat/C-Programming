//calc using func menu driven
#include<stdio.h>

add(int a,int b)
{
	printf("ADDITION OF %d AND %d => %d",a,b,a+b);
}
sub(int a,int b)
{
	printf("SUBTRACTION OF %d AND %d => %d",a,b,a-b);
}
mul(int a,int b)
{
	printf("MULTIPLICATION OF %d AND %d => %d",a,b,a*b);
}
div(int a,int b)
{
	printf("DIVISION OF %d AND %d => %d",a,b,a/b);
}

		



int main()
{ 
	char ch;
	int choice;
	int a,b;
	printf("\n1.	Addition  ");
	printf("\n2.	Subtraction  "); 
	printf("\n3.	Multiplication  ");
	printf("\n4.	Division  ");
	do
  {
	
	printf("\nenter choice->");
	scanf("%d",&choice);
	
	switch(choice)
	{
	
	
		case 1:
			printf("\nenter 2 numbers->");
	scanf("%d %d",&a,&b);
			add(a,b);
			break;
	
		case 2:
			printf("\nenter 2 numbers->");
	scanf("%d %d",&a,&b);
			sub(a,b);
			break;
		
		case 3:
			printf("\nenter 2 numbers->");
	scanf("%d %d",&a,&b);
			mul(a,b);
			break;
		
		case 4:
			printf("\nenter 2 numbers->");
	scanf("%d %d",&a,&b);
			div(a,b);
			break;	
		
		default:
			printf("\nPlease enter a valid option....");
			break;
			
	}
	
  printf("\nDO YOU WANT TO CALCULATE MORE IF NOT ENTER Q ...");
	scanf(" %c",&ch);
	
   }while(ch!='q');

return 0;	
}





		
