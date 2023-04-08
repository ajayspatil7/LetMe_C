#include <stdio.h>


void average(int mark1, int mark2, int mark3);

void average(int mark1, int mark2, int mark3) {
  
  float avg = (mark1 + mark2 + mark3) / 3.0;

  
  if (avg > 18) {
    printf("Excellent\n");
  } else if (avg >= 15 && avg <= 18) {
    printf("Very Good\n");
  } else if (avg >= 10 && avg < 15) {
    printf("Good, can improve\n");
  } else {
    printf("You need to work harder\n");
  }
}


int main() {
  int sub1, sub2, sub3;

  printf("Enter Subject 1 marks > ");
  scanf("%d", &sub1);

  printf("Enter Subject 2 marks > ");
  scanf("%d", &sub2);

  printf("Enter Subject 3 marks > ");
  scanf("%d", &sub3);
  
  average(sub1, sub2, sub3);

  return 0;
}

