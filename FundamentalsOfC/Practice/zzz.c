#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < i + 1; j++) {
            printf(" ");
        }
        for (j = 0; j < 6 - 2 * i; j++) {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}
