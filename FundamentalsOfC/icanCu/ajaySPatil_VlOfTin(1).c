//
//  main.c
//  FPC
//
//  Created by Ajay S Patil on 02/12/22.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
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
      printf("The volume of the tin is %f cubic units\n \n", volume);

      return 0;
}

