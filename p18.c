#include <stdio.h>

int main() {
  int b = 14;
  int f = 1;
  int i = 1;
  while(b >= 0){
    for(i = 1; i <=b; i++){
      printf(" ");
    }
    for(i = 1;i <= f; i++){
      printf("4");
    }
    f = f+2;
    printf("\n");
    b--;

  }
  return 1;
}
