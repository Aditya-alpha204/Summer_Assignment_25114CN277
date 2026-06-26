#include <stdio.h>

int main() {
    int age;
    
    printf("--- Voting Eligibility System ---\n");
    printf("Please enter your age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("\nStatus: ELIGIBLE\n");
        printf("Congratulations! You can cast your vote.\n");
    } 
    else if (age > 0) {
        printf("\nStatus: NOT ELIGIBLE\n");
        printf("You must wait %d more year(s) to vote.\n", 18 - age);
    } 
    else {
        printf("\nError: Invalid age entered. Please enter a valid number.\n");
    }
    
    return 0;
}