#include <stdio.h>

int main()
{
  int n =13;
  int j,i;
  for(i = 1; i <= n; i++)
  {
    for(j = 1; j <= n*2-1; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  return 1;
}
