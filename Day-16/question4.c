#include<stdio.h>

int main() {
    printf("Enter size of array: ");
    int size;
    scanf("%d", &size);
    
    int arr[size];
    for(int i = 0; i < size; i++) {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Ask the user which exact index they want to remove
    printf("Enter the index of the element to delete (0 to %d): ", size - 1);
    int indexToDelete;
    scanf("%d", &indexToDelete);
    
    // Safety check: Make sure the index actually exists
    if(indexToDelete < 0 || indexToDelete >= size) {
        printf("Invalid index!\n");
        return 1; // Exit the program early with an error
    }
    
    // The Shift and Overwrite Logic
    for(int i = indexToDelete; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Decrease the logical size of the array
    size--;
    
    // Print the final result
    printf("The new array after deletion is: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}