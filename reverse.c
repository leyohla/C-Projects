#include <stdio.h>

int main(void) {
    char word[100];
    char word2[10];
    int numb, i;
    
    printf("How many names do you wanna print?\n");
    scanf("%d", &numb);
    
    for(i=0; i<numb; i++) {
        scanf("%s %s", word, word2);
        printf("%s %s\n", word2, word);

    }
}
