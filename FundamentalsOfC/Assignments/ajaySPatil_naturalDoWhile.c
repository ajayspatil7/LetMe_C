#include <stdio.h>

int main() {

int n;
int i = 1;

printf("Enter a positive integer: ");
scanf("%d", &n);

do {
  printf("%d ", i);
  i++;
} while (i <= n);

return 0;
  
}