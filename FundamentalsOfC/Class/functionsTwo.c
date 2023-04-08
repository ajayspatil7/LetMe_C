/* 

- Declare preprocessor directive for the value of pi
- Declare a global variable for assigining radius
- Write a user defined function called Plate area to calculate the area of the plate
- Make plate area return the result
- Ask the user to enter the value of radius inside main() [5A]
    - Ask the user to enter the value of radius inside plate area [5B]
-  Write a function called cylinderVolume() which does the following
    - Ask the user to enter the height of the cylinder
    - Call the plate area to get the area and multiply with height to get volume. 

*/

#include <stdio.h>
#define pi 3.1428571429

float radius; // global var

int plateArea(){
  // To calculate the area of plate
  // pi r^2
  int rSq = pi * radius * radius;
  return rSq;
}

int cylinderVolume(){
// To calculate the volume of the cylinder
// // pi r^2 h

  int height;
  int rSq;
  
  printf("Enter the height of the cylinder : ");
  scanf("%d", &height);

  rSq = radius * radius;
  return pi * rSq * height;
}

int main(){

  printf("Enter the radius of the plate : ");
  scanf("%f", &radius);

  printf("Volume of cylinder is %d ltrs \n", cylinderVolume());
  printf("Area of plate is %d sqUnits \n", plateArea());
  
  
}