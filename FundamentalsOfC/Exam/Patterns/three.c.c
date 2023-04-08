#include<stdio.h>

int main() {
  int rows, i, j;
  char c = 'A';
  
  printf("Enter the number of rows: ");
  scanf("%d",&rows);
  
  for(i=1;i<=rows;i++){
    for(j=1;j<=i;j++){
      printf("%c",c);
  }
    c++;
    printf("\n");
  }
return 0;
}
// Tips :
// Needs only 2 for loops
// Store a char to start from in a variable ch
// Same like normal right angle pattern printing
// Print "%c" in second loop
// Exit second loop and in first loop increment value of c++
// Print new line "\n"