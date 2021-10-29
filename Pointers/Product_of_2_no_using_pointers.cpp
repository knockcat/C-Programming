//pointers
#include<stdio.h>
int main()
{
	short si,sj;
	short *iptr = &si, *jptr = &sj;
	
	printf("ENTER 2 VALUES->");
	scanf("%hi  %hi",iptr,jptr);
	
 int prod=*iptr * *jptr;

printf("prod=>%d",prod);

return 0;
}

