#include<stdio.h>

void main(){
    printf("Enter size of array: ");
    int size;
    int arr[size];
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The required array is: \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}