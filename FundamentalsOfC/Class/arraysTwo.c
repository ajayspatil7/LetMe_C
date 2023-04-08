

#include<stdio.h>
int main()
{
  int n;
  printf("Enter the array length:\n");
  scanf("%d", &n);
  int j=1;
  int a[n];
  printf("The numbers are:\n");
  for(int i=0; i<n; i++)
    {
      a[i] = j;
      printf("%d", a[i]);
      printf("\n");
      j++;
    }
}