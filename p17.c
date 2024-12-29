#include <stdio.h>

int main() {
  int i = 5;
  int j = 1;
  int v;
  for(i = 5; i>0; i--){
    for(j=1; j<20; j++){
      v = i*j;
      printf("v=%d\n", v);
    }
  }
  return 1;
}
