#include <stdio.h>

int main(void) {
    int expenses = 0;
    int sum = 0;

    while(expenses != -1){
        printf("enter the list of expenses\n");
        scanf("%d", &expenses);
        
        if(expenses != -1) {
            sum = sum + expenses;
        }
    }
    
    printf("%d", sum);
    return 0;
}
