#include <stdio.h>

void add(int num1, int num2, int num3);

void add(int num1, int num2, int num3) {
  printf("%d", num1 + num2 + num3);
}

int main() {
  int x, y, z;
  
  printf("Enter num 1 > ");
  scanf("%d", &x);

  printf("Enter num 2 > ");
  scanf("%d", &y);

  printf("Enter num 3 > ");
  scanf("%d", &z);
  
  add(x, y, z);

  return 0;
}


