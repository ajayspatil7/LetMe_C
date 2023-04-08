#include<stdio.h>
int main()
{
  char item[10];
  int qty;
  int cost;
  int c1 = 0;
  int total = 0;
  int no;
  printf("Enter the number of items: ");
  scanf("%d", &no);
  for(int i=0; i<no; i++)
    {
      printf("\nEnter item name: \n");
      scanf("%s", item);
      printf("Enter quantity of item : ");
      scanf("%d", &qty);
      printf("Enter the cost of item:\n");
      scanf("%d", &cost);
      c1 = cost*qty;
      total = total + c1;
      printf("The total cost of the item = %d", c1);
      c1 = 0;
    }
  printf("\nThe total bill = %d", total);
  return 0;
  }