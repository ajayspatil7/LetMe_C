#include <stdio.h>

int main(){

  int no, i=0;
  int sum;
  
  
  printf("Enter the size of your array : ");
  scanf("%d", &no);
  
  int array[no];
  
  // Adding elements to the array
  while(i < no){
    printf("Enter element %d ", i+1);
    scanf("%d", &array[i]);
    i++;
  }

  // Summing up all the numbers
  while(i <= no){
    sum = sum + array[i];
    i++;
  }
  printf("The sum of all the number is %d \n", sum);

  // Summing up first and last digit and checking if divisible by 5 or not
  if(array[0] + array[no-1] % 5 == 0){
    printf("It is divisible by 5 \n");
  }else{
    printf("It is not divisible by 5 \n");
  }



  
}