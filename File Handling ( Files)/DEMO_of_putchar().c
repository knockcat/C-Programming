// B. DEMO of putchar ()
#include <stdio.h> 
int main(void) 
{ 
    FILE *fptr ;
    int ch     ;

    fptr = fopen("d:\\sample.txt", "r"); 
    
    if(fptr == NULL) 
    { 
        printf("File open Error\n"); 
        return -1; 
    } 
  
    while ((ch = fgetc(fptr)) != EOF) 
           putchar(ch); 
    
    fclose(fptr) ;
}
