// WAP to print your address, incl (H.No, StreetName, Place, City, State, Pin) in Sep lines

// WAP to do a Birthday greeting
// WAP to VisitMyBotique


#include <stdio.h>

void address(){
  
  printf("838 Wisoky Turnpike Suite 195, Farrellmouth, Vermont, 275298, US \n");
  
}

void visitMyBotique(){

  printf("\nAnd also, please Visit my Botique shop as well ");
  printf("Thank you!! \n");

  
}

void birthdayGreeting() {
  printf("Everyone please welcome to my birthday party ");
  printf("The Venue address is, ");
  address();
  visitMyBotique();
  
}

int main(){

  birthdayGreeting();
  
}