#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float allowances;
    float deductions;
    float netSalary;
};

int main() {
    struct Employee emp[100];
    int count = 0;
    int choice;
    
    printf("=========================================\n");
    printf("        SALARY MANAGEMENT SYSTEM         \n");
    printf("=========================================\n");
    
    while(1) {
        printf("\n--- Main Menu ---\n");
        printf("1. Add Employee Salary Record\n");
        printf("2. View All Salary Slips\n");
        printf("3. Search Salary Slip by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            
            case 1:
                if(count < 100) {
                    printf("\nEnter Employee ID: ");
                    scanf("%d", &emp[count].id);
                    
                    printf("Enter Full Name: ");
                    scanf(" %[^\n]s", emp[count].name); 
                    
                    printf("Enter Basic Salary: $");
                    scanf("%f", &emp[count].basicSalary);
                    
                    printf("Enter Allowances (Bonus, etc): $");
                    scanf("%f", &emp[count].allowances);
                    
                    printf("Enter Deductions (Taxes, etc): $");
                    scanf("%f", &emp[count].deductions);
                    
                    emp[count].netSalary = emp[count].basicSalary + emp[count].allowances - emp[count].deductions;
                    
                    printf(">>> SUCCESS: Record added. Net Salary calculated: $%.2f\n", emp[count].netSalary);
                    count++; 
                } else {
                    printf(">>> ERROR: Database is completely full!\n");
                }
                break;
                
            case 2:
                if(count == 0) {
                    printf("\n>>> The database is currently empty.\n");
                } else {
                    printf("\n--- All Salary Records ---\n");
                    for(int i = 0; i < count; i++) {
                        printf("\nID: %d | Name: %s\n", emp[i].id, emp[i].name);
                        printf("Basic: $%.2f | Allowances: +$%.2f | Deductions: -$%.2f\n", 
                               emp[i].basicSalary, 
                               emp[i].allowances, 
                               emp[i].deductions);
                        printf("NET SALARY: $%.2f\n", emp[i].netSalary);
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
                    
                    printf("\nEnter Employee ID to generate slip: ");
                    scanf("%d", &searchId);
                    
                    for(int i = 0; i < count; i++) {
                        if(emp[i].id == searchId) {
                            printf("\n=========================================\n");
                            printf("               SALARY SLIP               \n");
                            printf("=========================================\n");
                            printf("Employee ID   : %d\n", emp[i].id);
                            printf("Employee Name : %s\n", emp[i].name);
                            printf("-----------------------------------------\n");
                            printf("Basic Salary  : $%.2f\n", emp[i].basicSalary);
                            printf("Allowances    : $%.2f\n", emp[i].allowances);
                            printf("Deductions    : $%.2f\n", emp[i].deductions);
                            printf("-----------------------------------------\n");
                            printf("NET PAY       : $%.2f\n", emp[i].netSalary);
                            printf("=========================================\n");
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
                printf("\n>>> Shutting down system. Goodbye!\n");
                return 0;
                
            default:
                printf("\n>>> Invalid choice! Please select an option from 1 to 4.\n");
        }
    }
    
    return 0;
}