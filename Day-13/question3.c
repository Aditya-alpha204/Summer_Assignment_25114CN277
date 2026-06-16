#include<stdio.h>


void main(){
    printf("Enter size of array: ");
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    int large=arr[0];
    int small=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>large){
            large=arr[i];
        }
        if(arr[i]<small){
            small=arr[i];
        }
          
    }
    printf("%d is largest\n",large);
    printf("%d is smallest",small);

}