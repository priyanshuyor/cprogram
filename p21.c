#include <stdio.h>

int main()
{
  int n;
  int x;
  short isPrime = 1;
  printf (" Enter a Number (>=2) to be Verified to be Prime and press Enter:");
  scanf ("%d", &n);
  for ( x = 2; x < n; x++ )
  {
    if ( n % x == 0 )
    {
      printf("Number is Not a Prime Number. Divisor is %d\n", x);
      isPrime = 0;
    }
  }
  if ( isPrime == 1 )
  {
  printf ("Number is a Prime Number\n");

  }
  return 1;
}
