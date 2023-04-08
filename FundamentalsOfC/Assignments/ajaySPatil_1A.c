#include<stdio.h>
#define pi 3.141592

float platearea(float);
float tinvol(float);

int main() {
  float radius;
  float area, volume;
  float result;
  
  printf("Enter the radius of the plate > ");
  scanf("%f", &radius);
  area = platearea(radius);
  volume = tinvol(area);
  printf("\nThe area of plate= %f", area);
  printf("\nThe volume of the tin= %f \n", volume);
}
float platearea(float radius)
{
  float area = radius * radius * pi;
  return area;
}
float tinvol(float area)
{
  float h;
  platearea(area);
  printf("\nEnter the height of the tin > ");
  scanf("%f", &h);
  float vol = area * h;
  return vol;
}