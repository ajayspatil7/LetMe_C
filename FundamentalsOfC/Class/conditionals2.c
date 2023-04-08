// WAP to input a number and compare which is lowest of two


# include <stdio.h>

int main(){
  float num1, num2;
  
  printf("Enter number 1 : ");
  scanf("%f", &num1);

  printf("Enter number 2 : ");
  scanf("%f", &num2);

  if(num1 > num2){
    printf("%f is largest \n", num1);
  }
  else if (num2 > num1){
    printf("%f is the largest \n", num2);
  }
  else{
    printf("Wrong input! \n");
  }

  
}