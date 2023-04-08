#include <stdio.h>
#include <math.h>

struct Camel{

  float radius, height, length, weight;
    
};

typedef struct Camel camel;

void input(){
  camel c;
  
  printf("Enter camel's height : ");
  scanf("%f", &c.height);

  printf("Enter camel's length : ");
  scanf("%f", &c.length);

  printf("Enter camel's radius : ");
  scanf("%f", &c.radius);
}

float findWeight(camel c){
  // Weight = pi * stomach_radius^3 * sqrt(height * length)
  float weight = M_PI * c.radius * c.radius * c.radius * sqrt(c.height * c.length);
  c.weight = weight;
  return weight;
}

int main(){
  camel c;
  
  input();
  float weight = findWeight(c);
  printf("The weight of camel with radius: %f, height: %f, length: %f is %f", c.radius, c.height, c.length, c.weight);
  
}