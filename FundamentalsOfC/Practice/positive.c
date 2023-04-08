#include <stdio.h>

int main(){

  int array[10];
  int positive, negative, zero=0;

  // Adding values into the array
  for(int i=0; i<10; i++){
    printf("Enter %d element : ", i+1);
    scanf("%d", &array[i]);
  }


  // Checking for +ve, -ve and 0
  for(int j=0; j<10; j++){
    if(array[j] > 0){
      positive += 1;
    }
    if(array[j] < 0){
      negative += 1;
    } else{
      zero += 1;
    }
  }
  

printf("Number of Zeros are %d , Number of +ve are %d , Number of Negative numbers are %d", zero, positive, negative);

}