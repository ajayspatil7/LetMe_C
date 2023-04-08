#include <stdio.h>

int input() {
    int n;
    printf("Enter an integer : ");
    scanf("%d", &n);
    return n;
}

int find_fibo(int n) {
    int a = 0, b = 1, c, i;
    if (n == 0) return a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

void output(int n, int fibo) {
    printf("%d in the Fibonacci sequence is %d.\n", n, fibo);
}

int main() {
    int n = input();
    int fibo = find_fibo(n);
    output(n, fibo);
    return 0;
}
