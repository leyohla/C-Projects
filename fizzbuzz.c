#include <stdio.h>

int main() {
    
    int i;
    
    printf("Welcome to Fizzbuzz.\n");
    for(i=0; i<=100; i++) {
        printf("Number: %d\n", i);
        if (i % 3 ==0 && i % 5 == 0) {
            printf("FizzBuzz!\n");
        }
        else if (i % 3 == 0) {
            printf("fizz\n");
        }
        else if (i % 5 == 0) {
            printf("buzz\n");
        }
    }
}
