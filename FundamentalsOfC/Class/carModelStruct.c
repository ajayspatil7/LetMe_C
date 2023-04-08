#include <stdio.h>


/* 1)WAP that allows the user to input the following details into a Structure
 -- Name of the car
 -- Color
 -- Price
 If the price is greater than Rs.20L display - "Luxury Car"
 If the price is greater than Rs.15L & less than Rs.20L display "Semi-Luxury Car"
 If price is between Rs.10L & Rs.15L (both prices inclusive) display "Comfort Car"
 If the price is less than Rs.10L display "Standard Car"
 
 */

struct Car{
    
    char name[50];
    char color[20];
    int price;
    
    
};

int main(){
    
    struct Car car1 = {"Porsche", "Silk-white", 25000000};
    
    if(car1.price > 2000000){
        printf("%s %s is a Luxury Car\n", car1.name, car1.color);
    } else if (car1.price > 1500000 && car1.price < 2000000){
        printf("%s %s is a Semi-Luxury Car\n",car1.name, car1.color);
    }else if (car1.price > 1000000 && car1.price < 1500000){
        printf("%s %s Comfort Car\n",car1.name, car1.color);
    }else if (car1.price < 1000000){
        printf("%s %s Pretty Standard Car\n",car1.name, car1.color);
    }else{
        printf("%d Invalid Input\n", car1.price);
    }
    
    
}
