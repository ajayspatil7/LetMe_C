#include <stdio.h>

int main(){
  
  int i, j, n;

  printf("Enter number of rows : ");
  scanf("%d", &n);


  for(i=n; i>=1; i--){
    for(j=1; j<=i; j++){
      printf("%d ", j);
    }
    printf("\n");
  }
  
  
  
}

/*

To remember,
0. Need only 3 variables including input number
1. Need only 2 loops
2. Loop 1 : Counter1 = noOfRows; Counter1 >= 1; decrement Counter1--
3. Loop 2 : Counter2 = 1; Counter2 <= Counter1; increment Counter2++
4. Loop 2 : printf("%d ", Counter2) In this reverse pyramid ' ' space is important
5. Loop 1 : NewLine, Printf("\n")

*/