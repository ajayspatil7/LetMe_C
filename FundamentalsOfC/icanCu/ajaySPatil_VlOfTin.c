#include <stdio.h>
#include <math.h>

int main(){
  long double pi = M_PI;
  float height, radius;
  float volume;
  
  // Taking the input from the user
  printf("Enter the radius of the Tin : ");
  scanf("%f", &radius);

  printf("Enter the height of the Tin : ");
  scanf("%f", &height);
  
  int rSquare = radius * radius;
  // Formula for Volume (pi r^2 h)
  volume = pi * rSquare * height;
  printf("%f cubic units\n", volume);

  return 0;
  
}