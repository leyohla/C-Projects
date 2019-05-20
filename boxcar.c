/* Problem set: You are responsible for a rail convoy of goods consisting of several boxcars. You start the train and after a few minutes 
you realize that some boxcars are overloaded and weigh too heavily on the rails while others are dangerously light. So you decide to stop 
the train and spread the weight more evenly so that all the boxcars have exactly the same weight (without changing the total weight). 
For that you write a program which helps you in the distribution of the weight.

Your program should first read the number of cars to be weighed (integer) followed by the weights of the cars (doubles). Then your program 
should calculate and display how much weight to add or subtract from each car such that every car has the same weight. The total weight of 
all of the cars should not change. These additions and subtractions of weights should be displayed with one decimal place.

You may assume that there are no more than 50 boxcars.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    int car;
    double array[50];
    double weight;
    double sum;
    int i;
    
    printf("How many cars need to be weighed?\n");
    scanf("%d", &car);
    
    for(i=1; i<=(car); i++) {
        printf("Enter the weight of the boxcar: \n");
        scanf("%lf", &array[i]);
        printf("The weight of boxcar %d is: %.1lf\n", i, array[i]); 
        sum = sum + array[i];
    }
    
    for (i=1; i<=(car); i++){
        double average = (sum/car);
        printf("The difference is: %.1lf\n", (average - array[i]));
    }
}
