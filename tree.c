/*
Problem set: Write a program that will give you the name of a specific tree based on its characteristics.
*/

#include <stdio.h>
int main() {
    int height;
    int leaflets;
    
    printf("What is the height of the tree?\n");
    scanf(" %d", &height);
    printf("How many leaflets does the tree have?\n");
    scanf(" %d", &leaflets); 
    if (height <= 5 && leaflets >= 8) {
        printf("Tinuviel\n");
    }
    if (height >= 10 && leaflets >=10) {
        printf("Calaelen\n");
    }
    if (height <= 8 && leaflets <=5 ) {
        printf("Falarion\n");
    }
    if (height >= 12 && leaflets <=7) {
        printf("Dorthonion\n");
    }
    if (!(height <= 5 && leaflets >= 8) && !(height >= 10 && leaflets >=10) && !(height <= 8 && leaflets <=5)  && !(height >= 12 && leaflets <=7)) {
        printf("Uncertain\n");
    }
}
