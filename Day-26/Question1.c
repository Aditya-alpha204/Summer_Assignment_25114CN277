#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() {
    srand(time(NULL));
    // rand() % 100 gives a number from 0 to 99. Adding 1 makes it 1 to 100.
    int target = rand() % 100 + 1; 
    
    int guess = 0;
    int attempts = 0;
    
    printf("Welcome to the Number Guessing Game!\n");
    printf("I am thinking of a number between 1 and 100.\n\n");
    while (guess != target) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess > target) {
            printf("Too high! Try again.\n\n");
        } 
        else if (guess < target) {
            printf("Too low! Try again.\n\n");
        } 
        else {
            printf("    CORRECT! You win! \n");
            printf("You guessed the number in %d attempts.\n", attempts);
        }
    }
    
    return 0;
}