#include <stdio.h>
#include <math.h>

int main(){
  float radius = radius * radius;
  long double pi = M_PI;
  float area;

  printf("Enter the area of circle : ");
  scanf("%f", &radius);

  area = pi * radius;
  printf("%f sq units \n", area);
  
  return 0;
}