/* 
The hostel in which you plan to spend the night tonight offers very interesting rates, as long as you do not arrive too late. 
Housekeeping finishes preparing rooms by noon, and the sooner guests arrive after noon, the less they have to pay. 
You are trying to build a C program that calculates your price to pay based on your arrival time.

Your program will read an integer (between 0 and 12) indicating the number of hours past noon of your arrival. 
For example, 0 indicates a noon arrival, 1 a 1pm arrival, 12 a midnight arrival, etc. 
The base price is 10 dollars, and 5 dollars are added for every hour after noon. 
Thankfully the total is capped at 53 dollars, so you'll never have to pay more than that. 
Your program should print the price (an integer) you have to pay, given the input arrival time.
*/

// c = cost, t = time.

#include <stdio.h>
#include <math.h>

int main(void)
{
    int c = 10;
    int t = 7;
    int total = (c +(t*5));

    if (t > 0)
    {
        printf("The total price for your stay is: $%d\n", total);
    }
    if (total >= 53)
    {
        printf("The total price for your stay is $53\n");
    }
}
