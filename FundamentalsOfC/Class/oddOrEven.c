#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    int result = a - b;
    int remainder = result % 2;

    if (remainder == 0) {
        printf("The result is even.\n");
        if (result % 4 == 0) {
            printf("The result is also divisible by 4.\n");
        }
    } else {
        printf("The result is odd.\n");
        if (result % 5 == 0) {
            printf("The result is also divisible by 5.\n");
        }
    }

    return 0;
}
