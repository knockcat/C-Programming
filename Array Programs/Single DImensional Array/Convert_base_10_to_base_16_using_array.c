//program to convert and display a number from base 10 to base 16 using arrays.   
#include <stdio.h>
int main()
{
printf("VISHAL JOSHI   SEC-E");
int decnum, quot, rem;
int i, j = 0;
char hexdecnum [100];
		printf ("\nEnter decimal number: ");
		scanf ("%ld", &decnum);
			quot= decnum;
				while (quot!= 0){
				
						rem =quot%16;
								if (rem < 10)
									hexdecnum [j++] = 48 +rem;
								else
									hexdecnum[j++] = 55+ rem; 
						quot =quot/16;}

		printf(" Hexadecimal equivalent of %ld is: \n",decnum);
			for (i =j; i >= 0; i--)
			printf("%c", hexdecnum[i]);
return 0; 
}

