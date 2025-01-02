#include <stdio.h>

int main()
{
  int n;
  int x;
  printf (" Enter a Number (>=2) to see its factors:");
  scanf ("%d", &n);
  for ( x = 2; x < n; x++ )
  {
    if ( n % x == 0 )
    {
      printf ("Factor of Number is:%d\n", x);
    }
  }
  return 1;
}
