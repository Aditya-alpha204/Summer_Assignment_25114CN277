#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee company[100];
    int count = 0;
    int choice;
    
    printf("=========================================\n");
    printf("     EMPLOYEE MANAGEMENT SYSTEM 1.0      \n");
    printf("=========================================\n");
    
    while(1) {
        printf("\n--- Main Menu ---\n");
        printf("1. Add New Employee\n");
        printf("2. View All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Update Employee Salary\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            
            case 1: 
                if(count < 100) {
                    printf("\nEnter Employee ID: ");
                    scanf("%d", &company[count].id);
                    
                    printf("Enter Full Name: ");
                    scanf(" %[^\n]s", company[count].name); 
                    
                    printf("Enter Department: ");
                    scanf(" %[^\n]s", company[count].department);
                    
                    printf("Enter Starting Salary: $");
                    scanf("%f", &company[count].salary);
                    
                    printf(">>> SUCCESS: Employee %s added to database!\n", company[count].name);
                    count++; 
                } else {
                    printf(">>> ERROR: Database is completely full!\n");
                }
                break;
                
            case 2: 
                if(count == 0) {
                    printf("\n>>> The database is currently empty.\n");
                } else {
                    printf("\n--- Employee Directory ---\n");
                    for(int i = 0; i < count; i++) {
                        printf("ID: %d | Name: %s | Dept: %s | Salary: $%.2f\n", 
                               company[i].id, 
                               company[i].name, 
                               company[i].department,
                               company[i].salary);
                    }
                }
                break;
                
            case 3: 
                if(count == 0) {
                    printf("\n>>> The database is currently empty.\n");
                } else {
                    int searchId;
                    int found = 0; 
                    
                    printf("\nEnter Employee ID to search: ");
                    scanf("%d", &searchId);
                    
                    for(int i = 0; i < count; i++) {
                        if(company[i].id == searchId) {
                            printf("\n--- Employee Record Found ---\n");
                            printf("Name: %s\n", company[i].name);
                            printf("Department: %s\n", company[i].department);
                            printf("Salary: $%.2f\n", company[i].salary);
                            found = 1;
                            break; 
                        }
                    }
                    
                    if(found == 0) {
                        printf("\n>>> ERROR: Employee ID %d not found.\n", searchId);
                    }
                }
                break;
                
            case 4: 
                if(count == 0) {
                    printf("\n>>> The database is currently empty.\n");
                } else {
                    int updateId;
                    int found = 0;
                    
                    printf("\nEnter Employee ID to update salary: ");
                    scanf("%d", &updateId);
                    
                    for(int i = 0; i < count; i++) {
                        if(company[i].id == updateId) {
                            printf("Current Salary for %s: $%.2f\n", company[i].name, company[i].salary);
                            printf("Enter New Salary: $");
                            scanf("%f", &company[i].salary);
                            
                            printf(">>> SUCCESS: Salary updated to $%.2f\n", company[i].salary);
                            found = 1;
                            break; 
                        }
                    }
                    
                    if(found == 0) {
                        printf("\n>>> ERROR: Employee ID %d not found.\n", updateId);
                    }
                }
                break;
                
            case 5: 
                printf("\n>>> Saving data... Shutting down system. Goodbye!\n");
                return 0;
                
            default:
                printf("\n>>> Invalid choice! Please select an option from 1 to 5.\n");
        }
    }
    
    return 0;
}