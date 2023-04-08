#include <stdio.h>

void compare(int a, int b) {
  if (a > b) {
    printf("%d is the larger number.\n", a);
  } else {
    printf("%d is the larger number.\n", b);
  }
}

int main() {
  int x, y;
  
  printf("Enter num 1 > ");
  scanf("%d", &x);

  printf("Enter num 2 > ");
  scanf("%d", &y);
  
  compare(x, y);   

  return 0;
}
