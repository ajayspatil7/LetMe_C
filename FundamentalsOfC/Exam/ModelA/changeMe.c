#include <stdio.h>

char changeMe(char *arr[]){
    return arr[0] == 'Z';
}

int main(){
    char myBakeryArray[10];
    myBakeryArray = "ABCD";
    char result = changeMe(&myBakeryArray);
    printf("%c", result);
}