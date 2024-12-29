#include <stdio.h>

int main()
{
  int n = 569;
  int x , k;
  short isPrime;
  for (k = 2; k < n; k++)
  {
    for ( x = 2; x < k; x++ )
    {
      if ( k % x == 0 )
      {
        isPrime = 0;
        break;
      }
      else
      {
        isPrime = 1;
      }
    }
    if ( isPrime == 1 )
    {
      printf ("Prime Number is:%d \n", k);
    }
  }
  return 1;
}
