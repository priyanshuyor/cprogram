#include <stdio.h>

int main() {
  int x = 5;
  int b = ++x;
  int a = x++;
  printf ("b=%d a=%d x=%d\n", b, a, x);
  return 0;
}
