#include <stdio.h>

int main() {
    int grid;
    int i;
    int j;
    int k;
    
	printf("How big do you want your grid to be?\n");
    scanf("%d", &grid);
    for (i=1; i<=(grid/2); i++) {
        printf(" # ");
        
    for(j=1; j<(grid); j++) {
        printf(" # ");
    }
    for(k=1; k<3; k++) {
    printf("\n ");
    }
  }
}
