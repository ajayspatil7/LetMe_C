#include <stdio.h>

int main() {
    int rows, i, j, count = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}

/*

To remember,
0. Need only 4 variables(Counter1, Counter2, n and Count = 1)
1. Need only 2 loops

2. Loop 1 : Counter1 = 1; Counter1 <= n; increment Counter1++
3. Loop 2 : Counter2 = 1; Counter2 <= Counter1; increment Counter2++

4. Loop 2 : Printf("%d", count)
5. Loop 2 : Increment count++

6. Loop 1 : NewLine, Printf("\n")

(i=1; i<=n; i++
j=1; j<=i; j++
print(%d, count)
increment count++)

*/
