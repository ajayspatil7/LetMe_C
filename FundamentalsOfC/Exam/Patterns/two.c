#include <stdio.h>

int main(){

  int i, j, n;

  printf("Enter number of rows : ");
  scanf("%d", &n);

  for(i=1; i<= n; i++){
    for(j=1; j<= i; j++){
      printf("%d", j);
    }
    printf("\n");
  }
  
}
/*

To remember,
0. Need only 3 variables including input number
1. Need only 2 loops
2. Loop 1 : Counter1 = 1; Counter1 <= rows; increment Counter1++
3. Loop 2 : Counter2 = 1; Counter2 <= Counter1; increment Counter2++
4. Loop 2 : Printf("%d", Counter2)
5. Loop 1 : NewLine, Printf("\n")

*/