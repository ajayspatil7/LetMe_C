#include <stdio.h>

int main(){
  int n;
  int i=1;

  printf("Enter a positive number : ");
  scanf("%d", &n);

  while(i <= n){
    printf("%d \n", i);
    i++;
    }  
}