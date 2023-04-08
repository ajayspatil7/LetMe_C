 #include <stdio.h>

int main(){

  int n, space, i, j;

  printf("Enter number of N : ");
  scanf("%d", &n);

  for(i=n; i >= 1; i--){
    for(space=0; space < n - i; space++){
      printf(" ");
    }
    
    for(j=1; j <= i * 2 - 1; j++){
      printf("*");
    }
    
    printf("\n");
  }
}

// (i=n; i >= 1; i--)
// (space=0; space<n-1; space++) print(' ')
// (j=1; j <= j*2-1; j++) print(*)

/*
To remember,
0. Need only 4 variables (n, loop1, loop2, space)
1. Need only 3 loops
2. Loop 1 : Counter1 = n; Counter1 >= 1; decrement Counter1--
3. Loop 2 : Space = 0; Space < n - i; increment Space++
4. Loop 2 : Print(" ") print space and exit the loop and close there itself
5. Loop 3 : Counter = 1; Counter * 2 - 1; Counter ++
6. Loop 3 : printf("*")
7. Loop 1 : NewLine, Printf("\n")
*/