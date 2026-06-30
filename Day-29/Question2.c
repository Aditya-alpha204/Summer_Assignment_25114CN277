#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    float price;
    int quantity;
};

int main() {
    struct Item inventory[100];
    int count = 0;
    int choice;

    printf("=========================================\n");
    printf("      INVENTORY MANAGEMENT SYSTEM        \n");
    printf("=========================================\n");

    while(1) {
        printf("\n--- Main Menu ---\n");
        printf("1. Add New Item\n");
        printf("2. View All Items (Table View)\n");
        printf("3. Search Item by ID\n");
        printf("4. Update Item Quantity (Restock / Sell)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            
            case 1: 
                if(count < 100) {
                    printf("\nEnter Item ID: ");
                    scanf("%d", &inventory[count].id);
                    
                    printf("Enter Item Name: ");
                    scanf(" %[^\n]s", inventory[count].name);
                    
                    printf("Enter Price per unit: $");
                    scanf("%f", &inventory[count].price);
                    
                    printf("Enter Initial Quantity in stock: ");
                    scanf("%d", &inventory[count].quantity);

                    printf(">>> SUCCESS: '%s' added to inventory.\n", inventory[count].name);
                    count++;
                } else {
                    printf(">>> ERROR: Inventory database is full!\n");
                }
                break;

            case 2: 
                if(count == 0) {
                    printf("\n>>> The inventory is currently empty.\n");
                } else {
                    printf("\n--- Current Inventory ---\n");
                    // Using format specifiers to create a perfectly aligned table!
                    printf("%-7s | %-20s | %-10s | %-10s\n", "ID", "Item Name", "Price", "Quantity");
                    printf("----------------------------------------------------------\n");
                    for(int i = 0; i < count; i++) {
                        printf("%-7d | %-20s | $%-9.2f | %-10d\n", 
                               inventory[i].id, 
                               inventory[i].name, 
                               inventory[i].price, 
                               inventory[i].quantity);
                    }
                }
                break;

            case 3: 
                if(count == 0) {
                    printf("\n>>> The inventory is currently empty.\n");
                } else {
                    int searchId;
                    int found = 0;
                    
                    printf("\nEnter Item ID to search: ");
                    scanf("%d", &searchId);

                    for(int i = 0; i < count; i++) {
                        if(inventory[i].id == searchId) {
                            printf("\n--- Item Found ---\n");
                            printf("Item ID  : %d\n", inventory[i].id);
                            printf("Name     : %s\n", inventory[i].name);
                            printf("Price    : $%.2f\n", inventory[i].price);
                            printf("In Stock : %d units\n", inventory[i].quantity);
                            found = 1;
                            break;
                        }
                    }
                    if(found == 0) {
                        printf("\n>>> ERROR: Item ID %d not found.\n", searchId);
                    }
                }
                break;

            case 4: 
                if(count == 0) {
                    printf("\n>>> The inventory is currently empty.\n");
                } else {
                    int updateId;
                    int found = 0;
                    
                    printf("\nEnter Item ID to update quantity: ");
                    scanf("%d", &updateId);

                    for(int i = 0; i < count; i++) {
                        if(inventory[i].id == updateId) {
                            int modifier;
                            printf("Current stock for '%s': %d units\n", inventory[i].name, inventory[i].quantity);
                            printf("Enter amount to ADD (use a negative number to process a SALE): ");
                            scanf("%d", &modifier);

                            // Prevent selling more than we actually have!
                            if(inventory[i].quantity + modifier < 0) {
                                printf(">>> ERROR: Cannot process sale. Only %d units available!\n", inventory[i].quantity);
                            } else {
                                inventory[i].quantity += modifier;
                                printf(">>> SUCCESS: Stock updated. New quantity is %d units.\n", inventory[i].quantity);
                            }
                            found = 1;
                            break;
                        }
                    }
                    if(found == 0) {
                        printf("\n>>> ERROR: Item ID %d not found.\n", updateId);
                    }
                }
                break;

            case 5:
                printf("\n>>> Saving data... Shutting down Inventory System. Goodbye!\n");
                return 0;

            default:
                printf("\n>>> Invalid choice! Please select an option from 1 to 5.\n");
        }
    }
    
    return 0;
}