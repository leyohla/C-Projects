//Using the strlen function from <string.h> library, as opposed to finding the length of the string via the null terminator.
//(See 'parity.c').

#include <stdio.h>
#include <string.h>

int main(void) {
    char name[50];
    int length;
    
    scanf("%s", name);
    length = strlen(name);
    
    if(length %2) {
        printf("Odd number\n");
    }
    else {
        printf("Even number\n");
    }
    
    printf("The length of name is: %d\n", length);
    
}
