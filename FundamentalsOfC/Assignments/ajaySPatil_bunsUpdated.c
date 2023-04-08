#include <ctype.h>
#include <stdio.h>
#include <string.h>

int lowerToUpper(char str){
  char c = str;
  char uppercase_c = toupper(c);
  return uppercase_c;
}


int main(void) {

  char item_name[50];
  float actual_cost, selling_price, profit, quantity, total_cost;
  float total_earnings = 0, total_items = 0, unsold_items = 0;
  char continue_selling;

  printf("------------------------------\n");
  printf("Welcome to the Shop\n");
  printf("------------------------------\n");

  while(continue_selling != 'Y'){
  printf("\nEnter item name : ");
  scanf("%s", item_name);

  printf("Enter actual item price: ");
  scanf("%f", &actual_cost);

  printf("Enter item selling price : ");
  scanf("%f", &selling_price);

  profit = selling_price - actual_cost;

  do {
    printf("Enter quantity : ");
    scanf("%f", &quantity);
    if (quantity <= 0) {
      printf("Not a valid quantity.\n");
      unsold_items += quantity;
    } else {
      total_cost = selling_price * quantity;
      printf("Total cost = : %.2f\n", total_cost);
      total_earnings += total_cost;
      total_items += quantity;
    }

    printf("Do you want to continue selling (Y/N)? ");
    scanf(" %s", &continue_selling);
  } while (lowerToUpper(continue_selling) == 'Y');

  printf("\nThe total profit earned by the vendor is: %.2f\n",
         total_earnings - (total_items * actual_cost));
  printf("\nThe total number of items sold by the vendor is: %.0f\n",
         total_items);
  printf("\nThe total number of unsold items is: %.0f\n", unsold_items);

  if(lowerToUpper(continue_selling) == 'N'){
    printf("\nThank you for shopping with us. Visit us again !!! \n");
    break;
  }
    
  } 

  return 0;
}