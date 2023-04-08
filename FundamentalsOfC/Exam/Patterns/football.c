/* WAP that stores using structure, the name of the footballer, the number of goals
he scored in World Cup, the country he has played and # of times he has
participated in the world cup. 

a) Enter the data for 3 Football Players using the concept of Array of Structures
b) Display the details entered

*/

#include <stdio.h>

struct FootBaller{
    char name[50];
    char country[20];
    int noOfGoals;
    int worldCupParticipation;
};



int main(){

    struct FootBaller player1 = {};
    struct FootBaller player2 = {};
    struct FootBaller player3 = {};
    struct FootBaller player4 = {};

    struct FootBaller allPlayers[] = {player1, player2, player3, player4};

    for(int i=0; i < 4; i++){
        printf("Enter player %d Name : ", i+1);
        scanf("%s", &*allPlayers[i].name);

        printf("Enter player %d Country : ", i+1);
        scanf("%s", &*allPlayers[i].country);

        printf("Enter player %d no of goals scored : ", i+1);
        scanf("%d", &allPlayers[i].noOfGoals);

        printf("Enter player %d WC participation : ", i+1);
        scanf("%d", &allPlayers[i].worldCupParticipation);
        printf("\n");
    }

   for(int j=0; j < 4; j++){
     printf("Player Name : %s\n", allPlayers[j].name);
     printf("Player's Country : %s\n", allPlayers[j].country);
     printf("Player's No of Goals scored : %d\n", allPlayers[j].noOfGoals);
     printf("Player's world Cup participation : %d\n\n", allPlayers[j].worldCupParticipation);
   }

    return 0;

}