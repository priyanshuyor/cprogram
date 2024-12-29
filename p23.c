#include <stdio.h>

int main()
{
  int n = 20;
  int x , k;
  short isPrime;
  for (k = 2; k < n; k++)
  {
    isPrime = 1;
    for ( x = 2; x < k; x++ )
    {
      if ( k % x == 0 )
      {
        isPrime = 0;
        break;
      }
    }
    if ( isPrime == 1 )
    {
      printf ("Prime Number is:%d \n", k);
    }
  }
  return 1;
}
