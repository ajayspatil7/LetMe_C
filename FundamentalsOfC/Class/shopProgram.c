#include <stdio.h>

int main(){

  float price = 12.50;
  char name[10] = "Bun";
  int quantity;
  float amount;
  
  printf("Enter the number of quantity > ");
  scanf("%d", &quantity);

  for(int i = 0; i <= 50; i+quantity){
    amount = amount + (price * quantity);
    amount += price * quantity;
    printf("%s %.2f\n");
    
    }
  
}