// Largest element in array.


#include <stdio.h>

int input_size(){
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n]) {
    printf("Enter the %d element of array : ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int find_largest_index(int n, int a[n]) {
    int max = a[0], index = 0;
    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
            index = i;
        }
    }
    return index;
}

void output(int index) {
    printf("Largest index in the array is. Index : %d\n", index);
}

int main() {
    int n = input_size();
    int a[n];
    input_array(n, a);
    int index = find_largest_index(n, a);
    output(index);
    return 0;
}


 

