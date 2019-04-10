#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);
    
int main(void)
{
while (true) {
    int i = get_int("It's time for you to build the pyramids. Please choose a number between 1 and 8\n");
    printf("I choose %i\n", i);
    }
    
   /* for (i=1; i<8; i++) {
        printf("#"); */
    /*
    if (i == "1") printf("#");
    if (i == "2") printf("##");
    if (i == "3") printf("###");
    if (i == "4") printf("####");
    if (i == "5") printf("#####");
    if (i == "6") printf("######");
    if (i == "7") printf("#######");
    if (i == "8") printf("########"); 
    */
    {   
    if (i <= 8 && i >= 1) {
            printf("Height: %i\n", i); 
        }
        else if (true) {
            printf("Please choose again\n");
        }
    }
}
}
