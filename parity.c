#include <stdio.h>

int main(void) {
    char name[50];
    int i = 0;
    
    printf("What is your name?\n");
    scanf("%s", name);
    
    while(name[i] != '\0') {
        i++;
    }
    
    if(i %2) {
        printf("Odd\n");
    }
    else{
        printf("Even\n");
    }  
}
