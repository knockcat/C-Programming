//Program to concencate two string and display the concencated string to the output screen

#include<stdio.h>
int main()
{
	char a[100], b[100];
	
	printf("VISHAL JOSHI  SEC - E\n\n\nEnter string 1->\n");
		gets(a);
	printf("Enter string 2->\n");
		gets(b);
		
		int i=0,j=0;
		while(a[i]!='\0')
  		i++;
  			while(b[j]!='\0')
  				{
    				a[i]=b[j];
    				j++;
    				i++;
  				}
 		 a[i]='\0';
  
  printf("\n\n\nconcencated string\n\n\n  \n%s",a);
  
	return 0;

}


/*	char c[40];
	int i,j;
	for(i=0; a[i]!='\0'; i++); 
 
   
   for(j=0; b[j]!='\0'; j++, i++)
   {
      a[i]=b[j];
   }
   
   a[i]='\0';
   printf("\nOutput: %s",a);*/



/*	int i=0,j=0;

	while(a[i] != '\0')
		{
  			c[j]=a[i];
  				i++;
  				j++;	
		}
		
		i=0;
		while(b[i] !=  '\0'){
			c[j]=b[i];
			i++;
			j++;
		}
		
		c[j]='\0';
		
		printf("concencated string - > \n %s",c);*/
		
		
