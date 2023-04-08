#include <stdio.h>

int main() {
  int age;

  printf("Enter the age : ");
  scanf("%d", &age);

  if (age >= 21) {
    printf("You can marry");
  } else if (age >= 18) {
    printf("You can Vote but, can't marry");
  } else {
    printf("Sorry please wait");
  }
}


