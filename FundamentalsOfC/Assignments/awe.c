#include <ctype.h>
#include <stdio.h>
#include <string.h>

int lowerToUpper(char str){
  char c = str;
  char uppercase_c = toupper(c);
  printf("%c\n", uppercase_c);  
  return 0;
}


int main(){
  char str[10];
  scanf("%s", str);
  lowerToUpper(*str);
  return 0;
  
}