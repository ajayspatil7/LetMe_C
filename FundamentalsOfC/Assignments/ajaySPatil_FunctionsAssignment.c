// All the Previous assignments should be converted to
// functions

# include <stdio.h>
# include <math.h>

# define pi 3.1428571429

float radius, rCube, height;

float areaOfPlate(){
  // Area of plate code goes here
  printf("Enter the radius of the Plate : ");
  scanf("%f", &radius);
  return pi * radius * radius;

}

void calculator(){
  // Calculator code goes here
  int x, y;
  int add, sub, prod;
  float div, rem;

  printf("Enter the value for X : ");
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
}

float distanceBetweenTwoPoints(){
  // Two point distance code goes here
  int distance;
  double x1, x2;
  double y1, y2;
  double coo1, coo2;

  printf("Enter the cordinates for Point one \n");
  printf("x1 : ");
  scanf("%lf", &x1);
  
  printf("x2 : ");
  scanf("%lf", &x2);

  printf("Enter the cordinates for Point two \n");
  printf("y1 : ");
  scanf("%lf", &y1);
  
  printf("y2 : ");
  scanf("%lf", &y2);
  
  coo1 = x2 - x1;
  coo2 = y2 - y1;
  
  distance = sqrt(coo1 * coo1 + coo2 * coo2);
  return distance;
  
}

float volumeOfCube(){
  float area;
  // Volume of cube code goes here
  printf("Enter the area of the Cube : ");
  scanf("%f", &area);
  rCube = area * area * area;
  return rCube;
}

float volumeOfTin(){
  // Volume of Tin code goes here
  printf("Enter the radius of the Tin : ");
  scanf("%f", &radius);

  printf("Enter the height of the Tin : ");
  scanf("%f", &height);
  
  return pi * radius * radius * height;
  
}

int main(){
  // Main thing goes here
  
}