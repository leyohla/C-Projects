#include <stdio.h>
#include <string.h>
/* Write a loop that makes seven calls to console.log to output the following triangle:

#
##
###
####
#####
######
####### */

int main() {
    
    int i;
    int j;
    int hash = 0;
    int count = 0;
    
    printf("enter number of #\n");
    scanf("%d", &hash);
    
    for(i = 1; i<=(hash); i++) {
        for (j=1; j<=i; j++) {
        printf("#");
        } 
    printf("\n");
    }
    return 0;
}
