/* Problem set: You plan to make a delicious meal and want to take the money you need to buy the ingredients. Fortunately you know in 
advance the price per pound of each ingredient as well as the exact amount you need. The program should read in the number of ingredients 
(up to a maximum of 10 ingredients), then for each ingredient the price per pound. Finally your program should read the weight necessary 
for the recipe (for each ingredient in the same order). Your program should calculate the total cost of these purchases, then display it 
with 6 decimal places. */

#include <stdio.h>

int main() {
    int ingredients;
    double price[10];
    double weight[10];
    double sum;
    int i;
    
    printf("How many ingredients? Enter a number from 1-10: \n");
    scanf("%d", &ingredients);
    
    printf("How much do these ingredients cost? \n");
    for(i=1; i<=(ingredients); i++) {
        scanf("%lf", &price[i]);
    }
    
    printf("What are the weights of these ingredients?\n");
    for(i=1; i<=(ingredients); i++) {
        scanf("%lf", &weight[i]);
    }
    
    for(i=1; i<=(ingredients); i++) {
        sum = sum + (price[i] * weight[i]);
    }
    printf("%lf\n", sum);
}
