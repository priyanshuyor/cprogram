#include <stdio.h>

int FindPrime( int n )
{
  int x;
  short isPrime = 1;
  for ( x = 2; x < n; x++ )
  {
    if ( n % x == 0 )
    {
      isPrime = 0;
      break;
    }
  }
  if ( isPrime == 1 )
  {
    printf ("Prime Number: %d\n", n);
  }
  return 1;
}

int main()
{
  int k;
  for(k = 2; k<5699999999999; k++)
  {
    FindPrime(k);
  }


  return 1;
}
