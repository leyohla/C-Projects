#include <stdio.h>

int main(void) {
    char word[101];
    int numb, i;
    
    printf("Tell me your word\n");
    scanf("%s", word);
    
    printf("How many times do u wanna print this word?\n");
    scanf("%d", &numb);
    
    for(i=0; i<numb; i++ ) {
        printf("%s\n", word);
    }
    
    printf("Your word %s has been printed %d times. Tada!\n", word, numb);
}
