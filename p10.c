#include <stdio.h>

int main() {
  int x = 56;
  int y = 56;
  if (x > y) {
    printf("x is greater than y\n");
  }
  else if (x==y) {
    printf("x is equal to y\n");
  }
  else {
    printf("y is greater than x\n");
  }
  return 0;
}
