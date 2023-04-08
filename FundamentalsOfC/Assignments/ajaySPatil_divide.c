#include <stdio.h>


double divide(double a, double b);
double divide(double a, double b) {
  
  if (b == 0) {
    printf("Error: Cannot divide by zero\n");
    return 0;
  }


  return a / b;
}


int main(void) {
  
  float x;
  float y;

  printf("Enter val 1 > ");
  scanf("%f", &x);

  printf("Enter val 2 > ");
  scanf("%f", &y);

  
  printf("The result of dividing %f by %f is %f\n", x, y, divide(x, y));

  return 0;
}


