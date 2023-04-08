#include <stdio.h>

void myFunction(char *ptr){

  return NULL;

  
}


int main(){

  char food[10] = "Tomato";
  printf("Food is %s ", food);

  myFunction(food);

  printf("Food is %s", food);
}