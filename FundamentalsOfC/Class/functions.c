// WAP to take your name using functions

#include <stdio.h>


void name(char name[50]) {
  scanf("%s", name);
  
}

int main(){
  char n1[10];
  printf("Name : ");
  name(n1);
  printf("%s", n1);
  return 0;
}

