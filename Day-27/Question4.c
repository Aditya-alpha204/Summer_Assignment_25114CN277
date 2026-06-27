#include <stdio.h>
#include <string.h>

struct Marksheet {
    int roll;
    char name[50];
    float math;
    float science;
    float english;
    float total;
    float percentage;
    char grade;
};

int main() {
    struct Marksheet db[100];
    int count = 0;
    int choice;
    
    printf("===================================\n");
    printf("       MARKSHEET GENERATION SYSTEM     \n");
    printf("=========================================\n");
    
    while(1) {
        printf("\n--- Main Menu ---\n");
        printf("1. Add Student Marks\n");
        printf("2. View All Marksheets\n");
        printf("3. Search Marksheet by Roll No\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            
            case 1:
                if(count < 100) {
                    printf("\nEnter Roll Number: ");
                    scanf("%d", &db[count].roll);
                    
                    printf("Enter Full Name: ");
                    scanf(" %[^\n]s", db[count].name); 
                    
                    printf("Enter marks for Math (0-100): ");
                    scanf("%f", &db[count].math);
                    
                    printf("Enter marks for Science (0-100): ");
                    scanf("%f", &db[count].science);
                    
                    printf("Enter marks for English (0-100): ");
                    scanf("%f", &db[count].english);
                    
                    db[count].total = db[count].math + db[count].science + db[count].english;
                    db[count].percentage = (db[count].total / 300.0) * 100;
                    
                    if(db[count].percentage >= 90) {
                        db[count].grade = 'A';
                    } else if(db[count].percentage >= 80) {
                        db[count].grade = 'B';
                    } else if(db[count].percentage >= 70) {
                        db[count].grade = 'C';
                    } else if(db[count].percentage >= 60) {
                        db[count].grade = 'D';
                    } else {
                        db[count].grade = 'F';
                    }
                    
                    printf(">>> SUCCESS: Marksheet generated for %s.\n", db[count].name);
                    count++; 
                } else {
                    printf(">>> ERROR: Database is completely full!\n");
                }
                break;
                
            case 2:
                if(count == 0) {
                    printf("\n>>> The database is currently empty.\n");
                } else {
                    printf("\n--- All Student Marksheets ---\n");
                    for(int i = 0; i < count; i++) {
                        printf("\nRoll No: %d | Name: %s\n", db[i].roll, db[i].name);
                        printf("Math: %.2f | Science: %.2f | English: %.2f\n", 
                               db[i].math, db[i].science, db[i].english);
                        printf("Total: %.2f/300 | Percentage: %.2f%% | Grade: %c\n", 
                               db[i].total, db[i].percentage, db[i].grade);
                        printf("-----------------------------------------\n");
                    }
                }
                break;
                
            case 3:
                if(count == 0) {
                    printf("\n>>> The database is currently empty.\n");
                } else {
                    int searchId;
                    int found = 0; 
                    
                    printf("\nEnter Roll Number to generate marksheet: ");
                    scanf("%d", &searchId);
                    
                    for(int i = 0; i < count; i++) {
                        if(db[i].roll == searchId) {
                            printf("\n=========================================\n");
                            printf("            STUDENT MARKSHEET            \n");
                            printf("=========================================\n");
                            printf("Roll Number : %d\n", db[i].roll);
                            printf("Name        : %s\n", db[i].name);
                            printf("-----------------------------------------\n");
                            printf("Math        : %.2f\n", db[i].math);
                            printf("Science     : %.2f\n", db[i].science);
                            printf("English     : %.2f\n", db[i].english);
                            printf("-----------------------------------------\n");
                            printf("Total Marks : %.2f / 300.00\n", db[i].total);
                            printf("Percentage  : %.2f%%\n", db[i].percentage);
                            printf("Final Grade : %c\n", db[i].grade);
                            printf("=========================================\n");
                            found = 1;
                            break; 
                        }
                    }
                    
                    if(found == 0) {
                        printf("\n>>> ERROR: Roll Number %d not found.\n", searchId);
                    }
                }
                break;
                
            case 4:
                printf("\n>>> Shutting down system. Goodbye!\n");
                return 0;
                
            default:
                printf("\n>>> Invalid choice! Please select an option from 1 to 4.\n");
        }
    }
    
    return 0;
}