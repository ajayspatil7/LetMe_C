#include <stdio.h>

void input(int *num1, int *den1, int *num2, int *den2) {
    
    
    printf("First fraction (Numerator) : ");
    scanf("%d", num1);
    
    printf("First fraction (Denominator) : ");
    scanf("%d", den1);
    
    printf("Second fraction (Numerator) : ");
    scanf("%d", num2);
    
    printf("Second fraction (Denominator) : ");
    scanf("%d", den2);
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den) {
    *res_num = (num1 * den2) + (num2 * den1);
    *res_den = den1 * den2;
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den) {
    
    printf("%d/%d + %d/%d = %d/%d\n", num1, den1, num2, den2, res_num/2, res_den/2);
}

int main() {
    int num1, den1, num2, den2, res_num, res_den;
    input(&num1, &den1, &num2, &den2);
    add(num1, den1, num2, den2, &res_num, &res_den);
    output(num1, den1, num2, den2, res_num, res_den);
    return 0;
}
