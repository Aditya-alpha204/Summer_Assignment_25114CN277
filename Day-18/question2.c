#include<stdio.h>

int main() {
    printf("Enter size of array :\n ");
    int si;
    scanf("%d", &si);
    int arr[si];
    for(int i = 0; i < si; i++) {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i = 1; i < si; i++) {
        
        int currentCard = arr[i];
        int j = i - 1;            
        
        while(j >= 0 && arr[j] > currentCard) {
            arr[j + 1] = arr[j]; 
            j--;                 
        }
        arr[j + 1] = currentCard;
    }
    
    printf("The sorted array is: ");
    for(int i = 0; i < si; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}