#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int largest;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Determine the largest number
    largest = num1;
    if (num2 > largest)
    {
        largest = num2;
    }
    if (num3 > largest)
    {
        largest = num3;
    }

    printf("The largest number is: %d \n", largest);

    return 0;
}



