//flow asssignment
/* da=55 % bs    hra=7.5% OF bs  
if(bs>15000) pf=1800
if(bs<=15000> pf=750
*/

#include<stdio.h>

int main()
{
	
	int N,emp_code;
	float bs,hra,da,pf,netsal=0;
	
	printf("\nenter the no. of employes=>");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		printf("\n enter employe emp_code=>");
		scanf("%d",&emp_code);
		
		printf("\n enter employes basic sal=>");
		scanf("%f",&bs);
		
	    da=0.55*bs;
		hra=0.075*bs;
		
		if(bs>15000)
		pf=1800;
		else if(bs<=15000)
		pf=750;
		
		netsal=(bs+da+hra)-pf;
		
		printf("\nEMP_CODE OF EMPLOYEE = %d  NET SALARY OF EMPLOYEE = %6.2f ",emp_code,netsal);
		
		
	}
	return 0;
}
