/* Write a program that converts Celcius to Fahrenheit.
This program was written using the CS50 sandbox.
*/

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) {
    int c = get_int("Enter the temperature in celcius: \n");
    float f = roundf((c * 9/5) + 32);
    printf("The Fahrenheit is: %.1f\n", f);
}
