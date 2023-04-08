#include<stdio.h>
#define pi 3.14159
float radius, result;

float plateArea();
float tinVolume();

int main() {
  printf("Enter the radius > ");
  scanf("%f", &radius);
  plateArea();
  tinVolume();
  printf("The volume of the tin= %f", result);
}

float plateArea() {
  result = pi*radius*radius;
  return result;
}

float tinVolume() {
  float h;
  printf("Enter the height of the tin > ");
  scanf("%f", &h);
  result = result*h;
  return result;
}