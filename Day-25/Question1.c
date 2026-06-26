#include <stdio.h>

int main() {
    // 1. The Setup
    int arr1[] = {1, 3, 5, 7};
    int size1 = 4;
    
    int arr2[] = {2, 4, 6, 8, 10};
    int size2 = 5;
    
    // The merged array must be exactly large enough to hold both
    int merged[9]; 
    
    // Our three inspectors
    int i = 0; // Points to arr1
    int j = 0; // Points to arr2
    int k = 0; // Points to the merged array
    
    // 2. PHASE 1: The Battle
    // Run this loop as long as BOTH arrays still have numbers to compare
    while (i < size1 && j < size2) {
        
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i]; // arr1 wins!
            i++;                 // Move arr1 pointer forward
        } else {
            merged[k] = arr2[j]; // arr2 wins!
            j++;                 // Move arr2 pointer forward
        }
        k++; // Always move the merged array pointer forward
    }
    
    // 3. PHASE 2: The Leftovers
    // Once the battle finishes, one array is completely empty. 
    // The other array still has numbers left. We just copy them over.
    
    // If arr1 has leftover numbers, dump them in
    while (i < size1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }
    
    // If arr2 has leftover numbers, dump them in
    while (j < size2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
    
    // 4. Print the final result
    printf("Merged Sorted Array: \n");
    for (int m = 0; m < (size1 + size2); m++) {
        printf("%d ", merged[m]);
    }
    printf("\n");

    return 0;
}