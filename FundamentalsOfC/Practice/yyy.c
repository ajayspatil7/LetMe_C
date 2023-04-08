#include <stdio.h>

int main() {
    int n, i;
    int max_index = 0;
    int max_value = 0;
    
    // Read the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Read the elements of the array
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find the largest element and its index
    for (i = 0; i < n; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
            max_index = i;
        }
    }
    
    // Print the result
    printf("The largest element is at index %d and its value is %d\n", max_index, max_value);
    
    return 0;
}
