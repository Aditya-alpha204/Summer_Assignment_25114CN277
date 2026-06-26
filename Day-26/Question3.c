#include <stdio.h>

int main() {
    float balance = 1000.00;
      int choice;
    float amount;
    
    printf("Welcome to the C-Bank ATM!\n");
    
    while (1) {
        
        printf("\n====================\n");
        printf("      ATM MENU      \n");
        printf("====================\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        switch (choice) {
            
            case 1:
                printf("\n>>> Your current balance is: $%.2f\n", balance);
                break;
                
            case 2:
                printf("\nEnter amount to deposit: $");
                scanf("%f", &amount);
                
                if (amount > 0) {
                    balance = balance + amount;
                    printf(">>> Successfully deposited $%.2f\n", amount);
                } else {
                    printf(">>> Error: Invalid amount.\n");
                }
                break;
                
            case 3:
                printf("\nEnter amount to withdraw: $");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance = balance - amount;
                    printf(">>> Please collect your cash: $%.2f\n", amount);
                } 
                else if (amount > balance) {
                    printf(">>> Error: Insufficient funds! You only have $%.2f\n", balance);
                } 
                else {
                    printf(">>> Error: Invalid amount.\n");
                }
                break;
                
            case 4:
                printf("\n>>> Thank you for banking with C-Bank. Have a great day!\n");
                return 0; 
                
            default: 
                printf("\n>>> Invalid choice! Please select an option from 1 to 4.\n");
        }
    }
    
    return 0;
}