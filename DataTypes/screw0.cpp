#include<stdio.h>
int
main ()
{
  short int sh; long int lg;
  int it;  float ft; double db;

  sh = 1 / 3.0;
  printf ("short = %d \n", sh);

  sh = it = lg = ft = db = 1 / 3.0;
  printf ("short = %d,int = %d ,long = %d \n", sh, it, lg);
  printf ("float = %6.2f, double = %6.3f\n", ft, db);
  // 0 0 0 0 0.33 0.33

  return 0;
}
