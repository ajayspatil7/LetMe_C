#include <stdio.h>

int main(){

  int i, j, n, space;

  printf("Enter no : ");
  scanf("%d", &n);

  for(i=1; i<=n; i++){
    for(space=1; space <= n - i; space++){
      printf(" ");
    }
    for(j=1; j <= 2 * i - 1; j++){
      printf("=");
    }
      printf("\n");
  }
return 0;
  
}

/*

To remember,
0. Need only 4 variables (n, loop1, loop2, space)
1. Need only 3 loops
2. Loop 1 : Counter1 = 1; Counter1 <= n; increment Counter1++
3. Loop 2 : Space = 1; Space <= n - i; increment Space++
4. Loop 2 : Print(" ") print space and exit the loop and close there itself
5. Loop 3 : printf("*")
6. Loop 1 : NewLine, Printf("\n")

*/