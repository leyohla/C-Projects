/* Problem set: You decide to bet on the final match of the Tug of War National Championship. 
Prior to the match the names and weights of the players are presented, alternating by team (team 1 player 1, team 2 player 1, 
team 1 player 2, and so on). There is the same number of players on each side. You record the player weights as they are presented 
and calculate a total weight for each time to inform your bet. You write a C program to assist with this.

Your program should first read an integer indicating the number of members per team. Then, the program should read the player weights 
(integers representing kilograms) alternating by team. 

After calculating the total weight of each team, the program should display the text "Team X has an advantage" (replacing X with 1 
or 2 depending on which team has a greater total weight).

You will then display the text "Total weight for team 1:" followed by the weight of team 1, then "Total weight for team 2:" followed 
by the weight of team 2 (see example below).

You are guaranteed that the two teams will not have the same total weight.
 * */
 
#include <stdio.h>
#include <math.h>
int main() {
    int sum1 = 0, sum2 = 0, k = 0, j = 0; 
    int tmp;

    printf("How many team members are there? \n");
    scanf("%i", &k);

    for (j=0; j<(k=4); j++) {
        printf("Enter the weight of a player on team 1\n");
        scanf("%d", &tmp);
        sum1+=tmp;
        printf("Enter the weight of a player on team 2\n");
        scanf("%d", &tmp); 
        sum2+=tmp;
        
    }
    printf("Total weight for team 1: %d\n", sum1);
    printf("Total weight for team 2: %d\n", sum2);
    printf("Total weight: %d\n", sum1+sum2);

    if (sum1 > sum2) {
        printf("Team 1 has the advantage!\nTotal weight for team 1: %d\n", sum1);
    }
    else {
        printf("Team 2 has the advantage!\nTotal weight for team 2: %d\n", sum2);
    }
    return(0); 
}
