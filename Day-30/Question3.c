#include <stdio.h>
#include <string.h>

int main() {
    int ids[100];
    char names[100][50];
    float salaries[100];
    
    int count = 0;
    int choice;

    printf("=========================================\n");
    printf("         MINI EMPLOYEE SYSTEM            \n");
    printf("=========================================\n");

    while(1) {
        printf("\n--- Main Menu ---\n");
        printf("1. Add Employee\n");
        printf("2. View All Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            
            case 1: 
                if(count < 100) {
                    printf("Enter Employee ID: ");
                    scanf("%d", &ids[count]);
                    
                    printf("Enter Employee Name: ");
                    scanf(" %[^\n]s", names[count]);
                    
                    printf("Enter Salary: $");
                    scanf("%f", &salaries[count]);
                    
                    printf(">>> SUCCESS: Employee '%s' added.\n", names[count]);
                    count++;
                } else {
                    printf(">>> ERROR: System capacity reached!\n");
                }
                break;
                
            case 2: 
                if(count == 0) {
                    printf("\n>>> System is empty.\n");
                } else {
                    printf("\n%-7s | %-20s | %-10s\n", "ID", "Name", "Salary");
                    printf("---------------------------------------------\n");
                    for(int i = 0; i < count; i++) {
                        printf("%-7d | %-20s | $%-9.2f\n", 
                               ids[i], 
                               names[i], 
                               salaries[i]);
                    }
                }
                break;
                
            case 3: 
                if(count == 0) {
                    printf("\n>>> System is empty.\n");
                } else {
                    int searchId;
                    int found = 0;
                    
                    printf("Enter Employee ID to search: ");
                    scanf("%d", &searchId);
                    
                    for(int i = 0; i < count; i++) {
                        if(ids[i] == searchId) {
                            printf("\n--- Record Found ---\n");
                            printf("ID     : %d\n", ids[i]);
                            printf("Name   : %s\n", names[i]);
                            printf("Salary : $%.2f\n", salaries[i]);
                            found = 1;
                            break; 
                        }
                    }
                    if(found == 0) {
                        printf(">>> ERROR: Employee ID %d not found.\n", searchId);
                    }
                }
                break;
                
            case 4: 
                printf("\n>>> Closing Mini Employee System. Goodbye!\n");
                return 0;
                
            default:
                printf("\n>>> Invalid choice! Select 1-4.\n");
        }
    }
    
    return 0;
}