#include <stdio.h>

int main()
{
  int year;
  printf (" Enter a Year to see if Leap Year and press Enter:");
  scanf ("%d", &year);

  if ( year % 400 == 0 )
  {
    printf ("Is a Leap Year\n");
  }
  else
  {
    if ( year % 4 == 0 )
    {
      if ( year % 100 == 0 )
      {
        printf ("Year is not a Leap Year\n");
      }
      else
      {
        printf ("Year is a Leap Year\n");
      }
    }
    else
    {
      printf ("Year is not a Leap Year\n");
    }
  }
  return 1;
}
