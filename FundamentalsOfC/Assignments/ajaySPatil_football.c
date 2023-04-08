#include <stdio.h>
#define TEAM_LIM 10

int main(void) {
  char teams[TEAM_LIM][100];
  int numTeams;

  printf("Number of teams to enter : ");
  scanf("%d", &numTeams);

  for (int i = 0; i < numTeams; i++){
    printf("Enter team name %d: ", i+1);
    scanf("%s", teams[i]);
  }

  printf("Your teams list :\n");
  for (int i = 0; i < numTeams; i++){
    printf("> %s\n", teams[i]);
  }

  return 0;
}
