#include <stdio.h>


int usingForLoops(int n){

  for (int i = 1; i <= n; i++) {
    printf("%d ", i);
  }
  printf("\n");
  return 0;
}

int usingWhile(int n){
  int i;
  
  while(i <= n){
    printf("%d \n", i);
    i++;
    }  
  
  return 0;
}

int usingDoWhile(int n){
int i = 1;

printf("Enter a positive number : ");
scanf("%d", &n);

do {
  printf("%d ", i);
  i++;
} while (i <= n);

return 0;
}


int main(){

int num;
int n;

printf("Choose which loop to use from the following : \n");
printf("1. To continue with For Loop \n");
printf("2. To continue with While Loop \n");
printf("3. To continue with Do While Loop \n");

scanf("%d", &num);


if(num == 1){
  printf("Enter a positive number : ");
  scanf("%d", &n);
  usingForLoops(n);
  printf("This was executed using For loop");
} else if (num == 2){
  printf("Enter a positive number : ");
  scanf("%d", &n);
  usingWhile(n);
  printf("This was executed using While loop");

} else if (num == 3){
  printf("Enter a positive number : ");
  scanf("%d", &n);
  usingDoWhile(n);
  printf("This was executed using Do-while loop");
}

return 0;

  
}