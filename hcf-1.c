#include <stdio.h>

int main()
{
  int x,y,z,r;
  printf (" Enter Number-1 (smaller) to be Verified to see its HCF: ");
  scanf ("%d", &x);
  printf (" Enter Number-2 (Larger) to be Verified to see its HCF: ");
  scanf ("%d", &y);
  if ( x > y )
  {
    z = x;
    x = y;
    y = z;
  }
  do
  {
    r = y % x;
    if ( r == 0 )
    {
      printf  ("HFC is %d\n", x);
    }
    else
    {
      y = x;
      x = r;
    }
   }
  while ( r > 0 );
  return 1;
}
