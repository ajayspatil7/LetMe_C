#include <stdbool.h>
#include <stdio.h>


int primesWithEratosthenes(int MAX_NUMBER) {

  if(MAX_NUMBER <= 1000) {
    bool primes[MAX_NUMBER + 1];

  // Initially set all elements to true
  for (int i = 2; i <= MAX_NUMBER; i++) {
    primes[i] = true;
  }

  // Now sieve the numbers
  for (int i = 2; i * i <= MAX_NUMBER; i++) {
    if (primes[i]) {
      for (int j = i * i; j <= MAX_NUMBER; j += i) {
        primes[j] = false;
      }
    }
  }

  // Print only primes, which are the only numbers left
  for (int i = 2; i <= MAX_NUMBER; i++) {
    if (primes[i]) {
      printf("%d\n", i);
    }
  }
  }else{
    printf("The number must be less than or equal to 1000\n");
  }

  return 0;
}

int main(void) {

  primesWithEratosthenes(1000);
  return 0;
}
