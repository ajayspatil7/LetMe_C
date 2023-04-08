#include <stdio.h>

int main() {
  char name[50];
  int age;

  printf("Enter your name: ");
  scanf("%s", name);

  printf("Enter your age: ");
  scanf("%d", &age);

  if (age >= 18) {
    printf("%s, You are eligible for Undergrad degree admission :) \n", name);
  } else {
    printf("%s, Sorry! you are not eligible for undergrad admission :( \n", name);
  }

  return 0;
}
