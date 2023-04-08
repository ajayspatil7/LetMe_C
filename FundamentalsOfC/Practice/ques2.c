#include <stdio.h>

int main(){
  int array[25];
  int search, count;

  // Adding elements to array
  for(int i=0; i<25; i++){
    printf("Enter %d element : ", i+1);
    scanf("%d", &array[i]);
  }

  // Taking input to search
  printf("Enter the number you want to search : ");
  scanf("%d", &search);

  // Traversing through the array
  for(int j=0; j<25; j++){

    if(array[j] == search){
      count += 1;
    }
    
    
  }
  printf("The number %d is in the array %d times\n", search, count);

  
}