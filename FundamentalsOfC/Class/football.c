/* WAP that stores the name of the footballer, the number of goals he scored in World Cup, the country he has played and # of times he has participated in the world cup
a) Enter the data for 3 Football Players without using the concept of Structures 
b) Display the details entered 
c) What is the difficulty entering and displaying the details? 
d) How can the concept of Structures help you to solve the problem you faced in c) */

#include <stdio.h>
int main()
{
  int goals, wc;
  char name[20], country[20];
  int n;
  printf("Enter the number of football players: ");
  scanf("%d", &n);
  for(int i=0; i<n; i++)
    {
      printf("\n\nEnter the name of %d footballer : ", i+1);
      scanf("%s", name);
      printf("\nPlayer name is = %s", name);
      
      printf("\nEnter the number of goals they scored in World Cup : ");
      scanf("%d", &goals);
      printf("\nNo. of goal scored in World cup : %d", goals);
      
      printf("\nEnter the country they has played : ");
      scanf("%s", country);
      printf("\nThe player is from : %s", country);
      
      printf("\nEnter the number of times they played in the World Cup: ");
      scanf("%d", &wc);
      printf("\nTimes the player played in the world cup : %d", wc);
      
      
      
      
    }
  return 0;
}