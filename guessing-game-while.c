//Another guessing game but using a while loop instead of a for-loop.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int r = (rand() % 99) + 1;
    
    int guess = 0;
    int loopcount; //this will keep track of the number of guesses the user has made.
    int total = 0;
    
    printf("Enter a number to read. rand number is: %d\n", r);
    
    printf("Welcome to the guessing game. Enter your first guess.\n");
    scanf("%d", &guess);
    loopcount = 0;
    while (loopcount < r) {
        if(guess > r) {
            printf("It is less. Guess again: \n");
            scanf("%d", &guess);
            total++;
            loopcount++;
        }

        else if (guess < r) {
            printf("It is more. Guess again: \n");
            total++;
            scanf("%d", &guess);
            loopcount++;
        }

        else if (guess == r) {
            printf("Congrats! You got it!\n"); 
            total++;
            break;
        }
    }
    
    printf("Total attempts: %d\n", total);
    
}
