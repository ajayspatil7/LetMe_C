//
//  main.c
//  FPC
//
//  Created by Ajay S Patil on 02/12/22.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    float area, volume;

      printf("Enter the size of the sides of the cube : ");
      scanf("%f", &area);

      volume = area * area * area;
      printf("The area of the cube is %f cubic units \n\n", volume);

      return 0;
}

