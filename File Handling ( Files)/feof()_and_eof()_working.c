// A. DEMO feof () and EOF working
#include <stdio.h>
int main () 
{
   int c;
  
   printf("Enter characters and then EOF \n");
   while(1) 
   {
      c = fgetc(stdin);
       if(feof(stdin)) 
       { 
         break ;
       }
      printf("%c", c);
   }
     return (0);
}
