#include <stdio.h>

int input_number() {
    int n;
    printf("Enter an Integer: ");
    scanf("%d", &n);
    return n;
}

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void output(int n, int result) {
    if(result == 1) {
        printf("%d Is a prime number.\n", n);
    }
    else {
        printf("%d Is not a prime number.\n", n);
    }
}

int main() {
    int n = input_number();
    int result = is_prime(n);
    output(n, result);
    return 0;
}
