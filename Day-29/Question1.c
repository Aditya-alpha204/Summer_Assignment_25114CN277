#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    char author[100];
    int totalCopies;
    int availableCopies;
};

int main() {
    struct Book library[100];
    int count = 0;
    int choice;
    
    printf("=========================================\n");
    printf("       LIBRARY MANAGEMENT SYSTEM         \n");
    printf("=========================================\n");
    
    while(1) {
        printf("\n--- Main Menu ---\n");
        printf("1. Add a New Book\n");
        printf("2. View All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Issue a Book\n");
        printf("5. Return a Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            
            case 1: // ADD BOOK
                if(count < 100) {
                    printf("\nEnter Book ID: ");
                    scanf("%d", &library[count].id);
                    
                    printf("Enter Book Title: ");
                    scanf(" %[^\n]s", library[count].title); 
                    
                    printf("Enter Author Name: ");
                    scanf(" %[^\n]s", library[count].author);
                    
                    printf("Enter Total Copies: ");
                    scanf("%d", &library[count].totalCopies);
                    
                    // When a new book is added, all copies are initially available!
                    library[count].availableCopies = library[count].totalCopies;
                    
                    printf(">>> SUCCESS: '%s' added to the library.\n", library[count].title);
                    count++; 
                } else {
                    printf(">>> ERROR: Library database is full!\n");
                }
                break;
                
            case 2: // VIEW ALL
                if(count == 0) {
                    printf("\n>>> The library has no books currently.\n");
                } else {
                    printf("\n--- Library Inventory ---\n");
                    for(int i = 0; i < count; i++) {
                        printf("ID: %d | Title: %s | Author: %s\n", 
                               library[i].id, library[i].title, library[i].author);
                        printf("Availability: %d out of %d copies\n", 
                               library[i].availableCopies, library[i].totalCopies);
                        printf("-----------------------------------------\n");
                    }
                }
                break;
                
            case 3: // SEARCH
                if(count == 0) {
                    printf("\n>>> The library has no books currently.\n");
                } else {
                    int searchId;
                    int found = 0; 
                    
                    printf("\nEnter Book ID to search: ");
                    scanf("%d", &searchId);
                    
                    for(int i = 0; i < count; i++) {
                        if(library[i].id == searchId) {
                            printf("\n--- Book Found ---\n");
                            printf("Title  : %s\n", library[i].title);
                            printf("Author : %s\n", library[i].author);
                            printf("Status : %d / %d available\n", library[i].availableCopies, library[i].totalCopies);
                            found = 1;
                            break; 
                        }
                    }
                    if(found == 0) {
                        printf("\n>>> ERROR: Book ID %d not found.\n", searchId);
                    }
                }
                break;
                
            case 4: // ISSUE BOOK
                if(count == 0) {
                    printf("\n>>> The library has no books currently.\n");
                } else {
                    int issueId;
                    int found = 0;
                    
                    printf("\nEnter Book ID to issue: ");
                    scanf("%d", &issueId);
                    
                    for(int i = 0; i < count; i++) {
                        if(library[i].id == issueId) {
                            found = 1;
                            // Check if we actually have copies left to give out!
                            if(library[i].availableCopies > 0) {
                                library[i].availableCopies--; // Decrease inventory
                                printf(">>> SUCCESS: '%s' has been issued.\n", library[i].title);
                                printf(">>> Remaining copies: %d\n", library[i].availableCopies);
                            } else {
                                printf(">>> ERROR: Sorry, all copies of '%s' are currently checked out.\n", library[i].title);
                            }
                            break;
                        }
                    }
                    if(found == 0) {
                        printf("\n>>> ERROR: Book ID %d not found.\n", issueId);
                    }
                }
                break;
                
            case 5: // RETURN BOOK
                if(count == 0) {
                    printf("\n>>> The library has no books currently.\n");
                } else {
                    int returnId;
                    int found = 0;
                    
                    printf("\nEnter Book ID to return: ");
                    scanf("%d", &returnId);
                    
                    for(int i = 0; i < count; i++) {
                        if(library[i].id == returnId) {
                            found = 1;
                            // Make sure we don't return more copies than we own!
                            if(library[i].availableCopies < library[i].totalCopies) {
                                library[i].availableCopies++; // Increase inventory
                                printf(">>> SUCCESS: '%s' has been returned.\n", library[i].title);
                                printf(">>> Available copies: %d\n", library[i].availableCopies);
                            } else {
                                printf(">>> ERROR: All %d copies of this book are already in the library!\n", library[i].totalCopies);
                            }
                            break;
                        }
                    }
                    if(found == 0) {
                        printf("\n>>> ERROR: Book ID %d not found.\n", returnId);
                    }
                }
                break;
                
            case 6: // EXIT
                printf("\n>>> Shutting down Library System. Goodbye!\n");
                return 0;
                
            default:
                printf("\n>>> Invalid choice! Please select an option from 1 to 6.\n");
        }
    }
    
    return 0;
}