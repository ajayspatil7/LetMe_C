#include <stdio.h>

int main(){

  int i, j, n;

  printf("Enter number of rows : ");
  scanf("%d", &n);

  for(i=0; i<=n; i++){ // Loop 1
    for(j=0; j<=i; j++){ // Loop 2
      printf("*");
    }
    printf("\n"); // Loop 1
  }
  
  
  
}

/* 
To remember,
0. Need only 3 variables including input number
1. Need only 2 loops
2. Loop 1 : Counter1 = 0; Counter1 <= rows; increment Counter1++
3. Loop 2 : Counter2 = Counter1; Counter2 <= Counter1; increment Counter2++
4. Loop 1 : NewLine, Printf("\n")

*/