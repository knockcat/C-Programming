//last term of fibbinaci using recursion and iteration
#include<stdio.h>
int fib_recur(int n)
{
   if (n <= 1)
      return n;
   return fib_recur(n-1) + fib_recur(n-2);
}
  
int fib_itra(int n)
{
  
  int f[n+2];   
  int i;
  f[0] = 0;
  f[1] = 1;
 
  for (i = 2; i <= n; i++)
  {
      
      f[i] = f[i-1] + f[i-2];
  }
 
  return f[n];
}
 
int main ()
{
  int n;
  printf("enter term of fibinacci series->");
  scanf("%d",&n);
  printf("\n%d term of fibinacci series is %d by recursion ", n,fib_recur(n));
  printf("\n%d term of fibinacci series is %d by iteration", n,fib_itra(n));
  
  return 0;
}
