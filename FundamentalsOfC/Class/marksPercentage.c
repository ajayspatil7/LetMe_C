// WAP a program to take down marks of three subjects along with the
// subject name and print the avg makes obtained

#include <stdio.h>

int main() {
  int subMarks1, subMarks2, subMarks3;
  int sub[3] = { subMarks1, subMarks2, subMarks3 };
  char str[50];
  int i, total;
  float avg;

  for (i = 0; i < 3; i++) {
    printf("Enter subject %d Name : ", i + 1);
    scanf("%s", str);

    printf("Enter %s Marks : ", str);
    scanf("%d", &sub[i]);

  }
  total = sub[0] + sub[1] + sub[2];
  avg = total / 3;
  printf("%f", avg);

  
  return 0;
}