//Create a program that displays on the screen a square of n x n stars, with the integer n given as an input.

#include <stdio.h>

int main() {
    int star = 0;
    int i;
    int j;
    int k;
    printf("How many stars would you like to display?\n");
    scanf("%d", &star);
    for(i = 1; i<=(star); i++) {
        printf("*");
    for(j=1; j<(star); j++) {
        printf("*"); 
        }
        printf("\n");
    }
}
