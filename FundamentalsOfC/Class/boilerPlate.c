// Today's code 8/11/22

#include <stdio.h>
#define PI 3.14

float result, radius, height;

void plateArea(){
  // pi * r^2
  float res = PI * radius * radius;
  printf("Result is %f \n", res);
}

void tinVolume(){
  float volume;
  
  printf("Enter the height of Tin  : ");
  scanf("%f", &height);
  volume = PI * radius * radius * height;

  printf("Volume is %f", volume);
  
}

int main(){
  printf("Enter the value of the radius : ");
  scanf("%f", &radius);

  plateArea();
  tinVolume();
  
}