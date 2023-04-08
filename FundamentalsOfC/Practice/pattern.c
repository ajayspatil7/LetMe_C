#include <stdio.h>

int main(){
  int val;

  printf("Enter the pattern value : ");
  scanf("%d", &val);

  for(int i=1; i<val; i++){
    
    for(int k=1; k<val;k++){
      printf(" ");
    }
    for(int j=1; j<i; j++){
      printf(" *");
    }
    
    printf("\n");
  }
}