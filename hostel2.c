/* Activity: More complex if else statements: Costly hotel rooms
Problem statement: The hostel in which you stop for the night changes its prices according to the age of the customer and the 
weight of their luggage. The rules are not very clear, so you decide to write a small program that will easily allow you and 
your travel companions to know the price of one night.

One room costs nothing if you are 60 (the age of the innkeeper), or 5 dollars if you are less than 10 years old. 
For everyone else, the cost is 30 dollars plus an additional 10 dollars if you bring more than 20 pounds of luggage. 
Your program should read the customer's age first, then the weight of their luggage, then output the price they have to pay.
*/

#include <stdio.h>
int main() {
    int customer = 0; 
    int weight = 0;
    int age = 0;
    int sum = 0;
    printf("What is your age?\n");
       scanf("%d", &age);
          printf("What is the weight of your luggage?\n");
            scanf("%d", &weight);
    if (age == 60) {
        printf("You pay nothing\n");
    }
    else if (age < 10) {
        printf("You pay $5\n");
    }
    else if (weight > 20 && age > 10) {
        sum = 30 + 10;
        printf("You pay $%d\n", sum);
    }
    else {
        printf("You pay $30 only\n");
    }
}
