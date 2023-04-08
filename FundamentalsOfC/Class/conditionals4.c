#include <stdio.h>


int main(){
  int m1, m2, m3;
  int total;
  float percentage;

  printf("Enter M1 : ");
  scanf("%d", &m1);

  printf("Enter M2 : ");
  scanf("%d", &m2);

  printf("Enter M3 : ");
  scanf("%d", &m3);

  total = m1 + m2 + m3;
  percentage = total/3;

  printf("%f is your percentage \n", percentage);

  if(percentage > 80){
    printf("Distinction");
  }
  else if (percentage <= 79 && percentage >= 69){
    printf("First Class");
  }
  else if (percentage <= 69 && percentage >= 59){
    printf("Second Class");
  }
  else if (percentage <= 49 && percentage >= 41){
    printf("Third Class");
  }
  else if (percentage < 40){
    printf("You failed");
  }

  

  
}