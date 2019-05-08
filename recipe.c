/* Your grandparents gave you a fantastic cooking recipe but you can never remember how much of each ingredient you have to use! 
There are 10 ingredients in the recipe and the quantities needed for each of them are given as input (in grams). Your program must 
read 10 integers (the quantities needed for each of the ingredients, in order) and store them in an array. It should then read an 
integer which represents an ingredient's ID number (between 0 and 9), and output the corresponding quantity.
*/

#include <stdio.h>
int main () {
    int array[10];
    int store = 0;
    int i = 0;
    printf("write how much the ingredients weigh in grams\n");
    for (i=0; i<10; i++) {
        scanf("%d", &array[i]);
        printf("%i weighs %dg\n", i, array[i]);
    } 
    printf("Which ingredient ID do you want to check the weight of? ");
    scanf("%d", &store);
    printf("The weight of this ingredient is: %d\n", array[store]);
}
