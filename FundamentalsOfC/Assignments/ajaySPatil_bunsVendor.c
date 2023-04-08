#include <stdio.h>

int main() {
char item_name[50];
float cost_per_piece, quantity, total_cost;
float total_earnings = 0;

printf("Enter the name of the item: ");
scanf("%s", item_name);

printf("Enter the cost per piece of the item: ");
scanf("%f", &cost_per_piece);

printf("Enter the quantity needed: ");
scanf("%f", &quantity);

if (quantity <= 0) {
  printf("Sorry, we don't have the required quantity.\n");
} else {
  total_cost = cost_per_piece * quantity;
  printf("The total cost is: %.2f\n", total_cost);
}

total_earnings += total_cost;
printf("The total money earned by the vendor is: %.2f\n", total_earnings);

return 0;
}