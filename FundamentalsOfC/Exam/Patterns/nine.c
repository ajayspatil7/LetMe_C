#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows; j++) {
            if (i == 1 || i == rows || j == 1 || j == rows) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
/* 

To remember,
0. Need only 3 variables(Counter1, Counter2, n)
1. Need only 2 loops and 1 if-else

2. Loop 1 : Counter1 = 1; Counter1 <= n; increment Counter1++
3. Loop 2 : Counter2 = 1; Counter2 <= n; increment Counter2++

4. Inside Loop 2
5. Use if Counter1 == 1 || Counter1 == n || Counter2 == 1 || Counter2 == n
6. If the condition is true, then print("* ") with right space
7. Else just print("  ") two empty space
8. Exit Loop 2

9. Loop 1 : NewLine, Printf("\n")

{
(i=1; i<=n; i++)
(j=1; j<=n; j++)
  if(i == 1 || i == n || j = 1 || j = n) print(* )
}else{
print( ) space
}

*/