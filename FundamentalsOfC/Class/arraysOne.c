// WAP to declare a character array and enter into the array character by character. Display the contents of the array.

#include <stdio.h>

int main()
{
  char c1[10];
  for(int i=0; i<10; i++)
    {
      printf("Enter array element\n");
      scanf(" %c", &c1[i]);
    }
  printf("%s", c1);
}
