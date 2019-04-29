/*
 * The following program will act as a guessing game in which the user has eight tries to guess a randomly generated number. 
 The program will tell the user each time whether he guessed high or low.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand (time(NULL) );
    //int random = 0; int a = 0; 
    int i; int n;
    int random = (rand() % 99)+1;
    
    for (i=0; i<8; i++) {
        printf("Guess the random number\n");
        scanf("%d", &n);
        if (n == random) {
            printf("you've guessed correctly!\n");
            break;
            //exit(1);
        }
        else if (n < random){
            printf("the number is too low, try again\n");
        }
        else {
            printf("the number is too high, try again\n");
        }
    }
    printf("wrong, you've failed!\n");
    return 1;
}
