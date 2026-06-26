#include <stdio.h>

int main() {
    int score = 0; 
    int choice;    
    
    printf("===================================\n");
    printf("    THE ULTIMATE TECH QUIZ 2024    \n");
    printf("===================================\n\n");
    
    printf("Q1: Which of the following is NOT a programming language?\n");
    printf("1. Python\n");
    printf("2. HTML\n");
    printf("3. C++\n");
    printf("4. Java\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    if (choice == 2) {
        printf(">>> CORRECT! HTML is a markup language, not a programming language.\n\n");
        score++;
    } else {
        printf(">>> INCORRECT! The correct answer was 2 (HTML).\n\n");
    }
    
    printf("Q2: What does CPU stand for?\n");
    printf("1. Central Process Unit\n");
    printf("2. Computer Personal Unit\n");
    printf("3. Central Processing Unit\n");
    printf("4. Central Processor Unit\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    if (choice == 3) {
        printf(">>> CORRECT!\n\n");
        score++;
    } else {
        printf(">>> INCORRECT! The correct answer was 3 (Central Processing Unit).\n\n");
    }
    printf("Q3: How many bytes are in a standard integer (int) in C?\n");
    printf("1. 1 byte\n");
    printf("2. 2 bytes\n");
    printf("3. 4 bytes\n");
    printf("4. 8 bytes\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    if (choice == 3) {
        printf(">>> CORRECT!\n\n");
        score++;
    } else {
        printf(">>> INCORRECT! The correct answer was 3 (4 bytes).\n\n");
    }
    

    printf("===================================\n");
    printf("            QUIZ OVER!             \n");
    printf("===================================\n");
    
    printf("You scored %d out of 3.\n", score);
    if (score == 3) {
        printf("Perfect score! You are a genius!\n");
    } else if (score == 2) {
        printf("Great job! Almost perfect.\n");
    } else {
        printf("Keep studying, you'll get it next time!\n");
    }
    
    return 0;
}