//accept an string and copy its value to another string and then print...
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char c[20]="VISHAL";
	char d[20]="";
	printf("\nBEFORE COPYING\n");
	printf("\nSOURCE STRING=>%s",c);
		printf("\nRESULTANT STRING=>%s\n",d);
	strcpy(d,c);
	
printf("\nAFTER COPYING\n");
	printf("\nSOURCE STRING=>%s\n",c);
		printf("\nRESULTANT STRING=>%s\n",d);
   
	return 0;
}

