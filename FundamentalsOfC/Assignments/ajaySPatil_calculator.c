#include <stdio.h>

int main(void) {
  int x, y, add, sub, prod;
  float div, rem;

  printf("Enter value for X : ");
  scanf("%d", &x);

  printf("Enter the value for Y : ");
  scanf("%d", &y);

  add = x + y;
  sub = x - y;
  prod = x * y;
  rem = x % y;
  div = x / y;

  printf("\nThe addition of %d and %d is %d \n", x, y, add);
  printf("The subtraction of %d and %d is %d \n", x, y, sub);
  printf("The multiplication of %d and %d is %d \n", x, y, prod);
  printf("The reminder of %d and %d is %f \n", x, y, rem);
  printf("The division of %d and %d is %f \n", x, y, div);
  
  return 0;
}