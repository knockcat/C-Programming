#include<stdio.h>
// Overflow 
// EXAMPLE 3

int main()
{
    short int sh ; long int lg ; unsigned int i;
    int it ;     float ft ;     double db ;

    i= db = ft = lg = it = sh = 100000/3;
   
    printf ("short = %d,int = %d ,long = %d \n", sh, it, lg);
    printf ("float = %6.2f, double = %6.3f\n", ft, db);
    printf ("Unsigned int i = %u \n", i);
     /* s = -32203    i = -32203  l = -32203
       f = -32203.00 d = -32203.00
       Unsigned int i = 4294935093 */
    return 0;
}
