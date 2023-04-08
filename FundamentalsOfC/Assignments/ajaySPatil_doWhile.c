#include <stdio.h>
#define MAX_VALUES 10

int main() {
  int values[MAX_VALUES];
  int num_values = 0;
  int num_positives = 0;
  int num_negatives = 0;

  do {
    printf("Enter an integer value (enter 0 to stop): ");
    scanf("%d", &values[num_values]);
    if (values[num_values] > 0) {
      num_positives++;
    } else if (values[num_values] < 0) {
      num_negatives++;
    }
    num_values++;
  } while (values[num_values-1] != 0 && num_values < MAX_VALUES);

  printf("You entered %d positive numbers and %d negative numbers.\n", num_positives, num_negatives);

  return 0;
}
