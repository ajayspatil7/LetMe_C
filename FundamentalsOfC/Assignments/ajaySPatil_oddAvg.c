#include <stdio.h>

int input_n() {
    int n;
    printf("Enter number of array elements : ");
    scanf("%d", &n);
    return n;
}

void input(int n, int a[n]) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter array element %d : ", i+1);
        scanf("%d", &a[i]);
    }
}

float odd_average(int n, int a[n]) {
    int i, count = 0, sum = 0;
    float avg;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            count++;
            sum += a[i];
        }
    }
    avg = (float)sum / count;
    return avg;
}

void output(float avg) {
    printf("Average of all the odd elements is: %.2f\n", avg);
}

int main() {
    int n = input_n();
    int a[n];
    input(n, a);
    float avg = odd_average(n, a);
    output(avg);
    return 0;
}
