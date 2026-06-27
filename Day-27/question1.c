#include <stdio.h>
#include <string.h>
struct Student {
    int rollNumber;
    char name[50];
    float grade;
};

int main() {
    struct Student database[100];
    int count = 0; 
    
    int choice;
    
    printf("=========================================\n");
    printf("   STUDENT RECORD MANAGEMENT SYSTEM      \n");
    printf("=========================================\n");
    
    while(1) {
        printf("\n--- Main Menu ---\n");
        printf("1. Add a New Student\n");
        printf("2. View All Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            
            case 1:
                if(count < 100) {
                    printf("\nEnter Roll Number: ");
                    scanf("%d", &database[count].rollNumber);
                    
                    printf("Enter First Name: ");
                    scanf("%49s", database[count].name);
                    
                    printf("Enter Grade (0-100): ");
                    scanf("%f", &database[count].grade);
                    
                    printf(">>> SUCCESS: Student added!\n");
                    
                    count++; 
                } else {
                    printf(">>> ERROR: Database is completely full!\n");
                }
                break;
                
            case 2:
                if(count == 0) {
                    printf("\n>>> The database is currently empty. Add a student first!\n");
                } else {
                    printf("\n--- Current Student Records ---\n");
                    for(int i = 0; i < count; i++) {
                        printf("Roll No: %d | Name: %s | Grade: %.2f\n", 
                               database[i].rollNumber, 
                               database[i].name, 
                               database[i].grade);
                    }
                }
                break;
                
            case 3: // EXIT
                printf("\n>>> Shutting down system. Goodbye!\n");
                return 0;
                
            default:
                printf("\n>>> Invalid choice! Please select 1, 2, or 3.\n");
        }
    }
    
    return 0;
}