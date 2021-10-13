#include<stdio.h>
// Overflow 
// EXAMPLE 4
//NOTE: INCLUDE THE HEADER FILE stdio.h
int main()
{
    short int sh ; long int lg ; unsigned int i;
    int it ;     float ft ;     double db ;

    sh = i= it = lg = ft = db = 100000/3;
    printf ("short = %d,int = %d ,long = %d \n", sh, it, lg);
    printf ("float = %6.2f, double = %6.3f\n", ft, db);
    printf ("Unsigned int i = %u \n", i);

    return 0;
}
