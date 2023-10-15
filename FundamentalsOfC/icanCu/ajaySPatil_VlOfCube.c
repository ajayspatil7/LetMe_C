#include <stdio.h>

int main(){
  float area, volume;

  printf("Enter the area of the cube : ");
  scanf("%f", &area);

  volume = area * area * area;
  printf("The area of the cube is %f cubic units \n", volume);

  return 0;

  
}