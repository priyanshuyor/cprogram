#include <stdio.h>

short main() {
  short i = 1;

  while (i > 0 || i <= 0) {
    printf("%d\n", i);
    i++;
    if (i == -32700) {
      break;
    }
  }
  printf("Computing completed: %d\n", i);
  return 1;
}
