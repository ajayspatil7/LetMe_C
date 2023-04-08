#include<stdio.h>
int main()
{
  int n; int a[n];
  printf("Enter array length:\n");
  scanf("%d", &n);
  printf("Enter array elements:\n");
  for(int i=0; i<n; i++)
    {
      scanf("%d", &a[i]);
    }
  for(int i=0; i<n; i++)
    {
      if(a[i]<0)
      {
        printf("%d element is negative", a[i]);
        printf("\n");
      }
      else if(a[i]>0)
      {
        printf("%d element is positive", a[i]);
        printf("\n");
      }
        else if (a[i] != 0 || a[i]!= -1 || a[i] > 0){
          printf("You must have entered a char or non Int value\n");
          break;
        }
      else
      {
        printf("%d element is zero", a[i]);
        printf("\n");
      }
    }
}