#include <stdio.h>

struct student {
  char name[50];
  char usn[15];
  char email[50];
  char phone[15];
  float final_marks;
};

void bestOfTwo(float test1, float test2, float *final_marks) {
  *final_marks = (test1 > test2) ? test1 : test2;
}

void retestStudents(float test1, float *final_marks) {
  *final_marks = (test1 * 0.6);
}

void ruleToApply(float test1, float test2, float *final_marks) {
  if (test1 >= 40) {
    bestOfTwo(test1, test2, final_marks);
  } else {
    retestStudents(test1, final_marks);
}
  
int main() {
  struct student s;
  float test1, test2;
  
  printf("Enter student name: ");
  scanf("%s", s.name);
  printf("Enter USN: ");
  scanf("%s", s.usn);
  printf("Enter email: ");
  scanf("%s", s.email);
  printf("Enter phone number: ");
  scanf("%s", s.phone);
  printf("Enter marks for Test 1: ");
  scanf("%f", &test1);
  printf("Enter marks for Test 2: ");
  scanf("%f", &test2);
  
  determine_rule(test1, test2, &s.final_marks);
  print_result(s);
  
  return 0;
}