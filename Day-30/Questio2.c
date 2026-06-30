#include <stdio.h>
#include <string.h>

int main() {
    // Parallel arrays to hold our mini library data
    int ids[100];
    char titles[100][50];
    int available[100]; // 1 means Available, 0 means Borrowed
    
    int count = 0;
    int choice;

    printf("=========================================\n");
    printf("          MINI LIBRARY SYSTEM            \n");
    printf("=========================================\n");

    while(1) {
        printf("\n--- Main Menu ---\n");
        printf("1. Add Book\n");
        printf("2. View All Books\n");
        printf("3. Borrow Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            
            case 1: // ADD BOOK
                if(count < 100) {
                    printf("Enter Book ID: ");
                    scanf("%d", &ids[count]);
                    
                    printf("Enter Book Title: ");
                    scanf(" %[^\n]s", titles[count]);
                    
                    available[count] = 1; // New books are available by default
                    
                    printf(">>> SUCCESS: '%s' added to the library.\n", titles[count]);
                    count++;
                } else {
                    printf(">>> ERROR: Library capacity reached!\n");
                }
                break;
                
            case 2: // VIEW BOOKS
                if(count == 0) {
                    printf("\n>>> Library is empty.\n");
                } else {
                    printf("\n%-7s | %-12s | %-20s\n", "ID", "Status", "Title");
                    printf("---------------------------------------------\n");
                    for(int i = 0; i < count; i++) {
                        // Print "Available" if 1, "Borrowed" if 0
                        printf("%-7d | %-12s | %-20s\n", 
                               ids[i], 
                               available[i] ? "Available" : "Borrowed", 
                               titles[i]);
                    }
                }
                break;
                
            case 3: // BORROW BOOK
            case 4: // RETURN BOOK
                if(count == 0) {
                    printf("\n>>> Library is empty.\n");
                } else {
                    int searchId;
                    int found = 0;
                    
                    printf("Enter Book ID: ");
                    scanf("%d", &searchId);
                    
                    for(int i = 0; i < count; i++) {
                        if(ids[i] == searchId) {
                            found = 1;
                            
                            if(choice == 3) { // Borrow Logic
                                if(available[i] == 1) {
                                    available[i] = 0;
                                    printf(">>> SUCCESS: You borrowed '%s'.\n", titles[i]);
                                } else {
                                    printf(">>> ERROR: '%s' is currently checked out.\n", titles[i]);
                                }
                            } else { // Return Logic
                                if(available[i] == 0) {
                                    available[i] = 1;
                                    printf(">>> SUCCESS: You returned '%s'.\n", titles[i]);
                                } else {
                                    printf(">>> ERROR: '%s' is already in the library!\n", titles[i]);
                                }
                            }
                            break; // Stop searching once found
                        }
                    }
                    if(found == 0) {
                        printf(">>> ERROR: Book ID %d not found.\n", searchId);
                    }
                }
                break;
                
            case 5: // EXIT
                printf("\n>>> Closing Mini Library. Goodbye!\n");
                return 0;
                
            default:
                printf("\n>>> Invalid choice! Select 1-5.\n");
        }
    }
    
    return 0;
}