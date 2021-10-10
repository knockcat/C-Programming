#include<stdio.h>
int main ()
{
  short int sh;   long int lg;
  int it;   float ft;   double db;

  printf ("short = %u,int = %u ,long = %u \n", sizeof (sh), sizeof (it),sizeof (lg));
  printf ("float = %u , double = %u \n", sizeof (ft), sizeof (db));
  // 2 4 4 4 8 on local machine
  return 0;
}
//long happens to 8 in online gdb compiler
