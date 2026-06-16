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
    
    // Outer loop: Pick a number to check against the rest
    for(int i = 0; i < size; i++) {
        
        // Inner loop: Scan everything to the right of 'i'
        for(int j = i + 1; j < size; j++) {
            
            // If we find a duplicate...
            if(arr[i] == arr[j]) {
                
                // The Shift and Overwrite Logic
                for(int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                
                size--; // Decrease the logical size of the array
                j--;    // CRITICAL: Step 'j' back so we don't skip the newly shifted element!
            }
        }
    }
    
    // Print the final, cleaned-up array
    printf("The array after removing duplicates is: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}