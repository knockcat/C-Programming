// Explicit Type Casting
// EXAMPLE 7
//NOTE: INCLUDE THE HEADER FILE stdio.h
#include<stdio.h>
int main()
{
    short int sh ;  
    int it ; float ft  = 8.9 ;  

    sh = ft = ( it = (float) ft / 3) * 3.3 ;

    printf ("short = %d,int = %d ,float = %6.2f \n", sh, it, ft);

    return 0;
}

/* short = 6,int = 2 ,float =   6.60 */

