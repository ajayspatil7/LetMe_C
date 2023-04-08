#include <stdio.h>

int main(void) {
  int i, j, k;
  for (i = 5; i >= 1; i--) {
    // Loop 1
    
    for (j = 5; j > i; j--) {
      // Loop 2
      printf(" ");
    }
    
    for (k = 1; k <= i; k++) {
      // Loop 3
      printf("*");
    }
    // Loop 1
    printf("\n");
  }
  return 0;
}
