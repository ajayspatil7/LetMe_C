//
//  main.c
//  FPC
//
//  Created by Ajay S Patil on 02/12/22.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    float radius = radius * radius;
      long double pi = M_PI;
      float area;

      printf("Enter the radius of circle : ");
      scanf("%f", &radius);

      area = pi * radius;
      printf("Area of the circle is %f sq units \n", area);
      
      return 0;
}

