#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
/*
To remember,
0. Need only 3 variables (n, loop1, loop2)
1. Need only 2 loops

2. Loop 1 : Counter1 = 1; Counter1 <= n; increment Counter1++
3. Loop 2 : Counter2 = 1; Counter2 <= n; increment Space++
4. Loop 2 : Print("* ") print space after the '* '

5. Loop 1 : NewLine, Printf("\n")
*/