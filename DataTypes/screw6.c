// Explicit Type Casting
// EXAMPLE 8
//NOTE: INCLUDE THE HEADER FILE stdio.h
#include<stdio.h>
int main()
{
    short int sh ;  
    int it ; float ft  = 8.9 ;

    sh = it = ( ft = (int) ft / 3.0) * 3.3 ;
    printf ("short = %d,int = %d ,float = %6.2f \n", sh, it, ft);
    return 0;
}/* short = 8,int = 8 ,float =   2.67    */
