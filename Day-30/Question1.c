#include <stdio.h>
#include <string.h>

int main() {
    // The Parallel Arrays
    int rollNumbers[100];
    char names[100][50]; // Holds up to 100 names, each up to 49 characters long
    float grades[100];
    
    int count = 0; // Tracks the current number of students
    int choice;
    
    printf("=========================================\n");
    printf("   STUDENT SYSTEM (PARALLEL ARRAYS)      \n");
    printf("=========================================\n");
    
    while(1) {
        printf("\n--- Main Menu ---\n");
        printf("1. Add a New Student\n");
        printf("2. View All Students\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            
            case 1: // ADD STUDENT
                if(count < 100) {
                    printf("\nEnter Roll Number: ");
                    scanf("%d", &rollNumbers[count]);
                    
                    printf("Enter Full Name: ");
                    scanf(" %[^\n]s", names[count]); 
                    
                    printf("Enter Grade (0-100): ");
                    scanf("%f", &grades[count]);
                    
                    printf(">>> SUCCESS: Student '%s' added!\n", names[count]);
                    
                    count++; // Move the index forward for the next student
                } else {
                    printf(">>> ERROR: System is completely full!\n");
                }
                break;
                
            case 2: // VIEW ALL STUDENTS
                if(count == 0) {
                    printf("\n>>> The system is currently empty.\n");
                } else {
                    printf("\n--- Current Student Records ---\n");
                    // We use the same 'i' to pull data from all three arrays at once
                    for(int i = 0; i < count; i++) {
                        printf("Roll No: %d | Name: %s | Grade: %.2f\n", 
                               rollNumbers[i], names[i], grades[i]);
                    }
                }
                break;
                
            case 3: // SEARCH STUDENT
                if(count == 0) {
                    printf("\n>>> The system is currently empty.\n");
                } else {
                    int searchRoll;
                    int found = 0;
                    
                    printf("\nEnter Roll Number to search: ");
                    scanf("%d", &searchRoll);
                    
                    for(int i = 0; i < count; i++) {
                        if(rollNumbers[i] == searchRoll) {
                            printf("\n--- Record Found ---\n");
                            printf("Roll Number : %d\n", rollNumbers[i]);
                            printf("Name        : %s\n", names[i]);
                            printf("Grade       : %.2f\n", grades[i]);
                            found = 1;
                            break; 
                        }
                    }
                    if(found == 0) {
                        printf("\n>>> ERROR: Roll Number %d not found.\n", searchRoll);
                    }
                }
                break;
                
            case 4: // EXIT
                printf("\n>>> Shutting down system. Goodbye!\n");
                return 0;
                
            default:
                printf("\n>>> Invalid choice! Please select 1, 2, 3, or 4.\n");
        }
    }
    
    return 0;
}