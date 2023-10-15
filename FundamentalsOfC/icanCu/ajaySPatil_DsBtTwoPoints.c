//
//  main.c
//  FPC
//
//  Created by Ajay S Patil on 02/12/22.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
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
      printf("Distance would be %d Meters", distance);


      return 0;
}

