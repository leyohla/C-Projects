#include <stdio.h>

int main() {
    int cities;
    int population;
    int i;
    
    printf("How many cities are in your chosen region?\n");
    scanf("%d", &cities);
    printf("What are the populations of the cities in this region?\n");
    int sum;
    
    for(i=1; i<=(cities); i++) {
        scanf("%d", &population);
    
                if(population >= 10000) {
                sum = sum + (population >= 10000);
                }
    }
    printf("total cities with high populations: %d\n", sum);
}
