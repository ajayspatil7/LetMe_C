#include <stdio.h>

void inputMarks(float f1, float f2){
  printf("You have entered %f \n", f1);
  printf("You have entered %f \n", f2);
}

float bestOfTwo(float m1, float m2){
  if(m1 > m2){
    return m1; 
  } else{
    return m2;
  }
  
}

int main(){
  float sub1, sub2, bestTwo;
  
  printf("Enter Subject 1 marks : ");
  scanf("%f", &sub1);

  printf("Enter Subject 2 marks : ");
  scanf("%f", &sub2);

  inputMarks(sub1, sub2);
  bestTwo = bestOfTwo(sub1, sub2);

  printf("Best of two subjest is : %f \n", bestTwo);
        
}