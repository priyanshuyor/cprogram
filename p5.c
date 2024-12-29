#include <stdio.h>

int main() {
  
  int val36 = 36;
  int val42 = 42;
  int chg;
  printf("Original Num: %d %d \n", val36, val42);
  chg = val36;
  val36 = val42;
  val42 = chg;
  printf("Swapped Num: %d %d \n", val36, val42); 
  return 1;
} 
