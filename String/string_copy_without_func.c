//program to  copy a string to an another without using strcpy fuction

#include<stdio.h>

int main()
{
	char a[20],b[20],size,i;
		printf("VISHAL JOSHI  SEC - E\n\n\nEnter an string->\n");
		gets(a);
		size = sizeof(a)/sizeof(a[0]);
		for(i=0;i<size;i++){
			b[i]= a[i];
		}
		

		
			printf("%s",b);
		
		return 0;	
	
}


