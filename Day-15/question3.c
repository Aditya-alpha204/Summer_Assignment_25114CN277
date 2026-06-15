#include<stdio.h>

int main(){
    printf("Enter size of array: ");
    int size;
    scanf("%d",&size);
    int arr[size];
    int brr[size];
    for(int i=0;i<size;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        if(i==size-1){
            brr[0]=arr[i];
        }
        else{
            brr[i+1]=arr[i];
        }
    }
    printf("The Right rotated array is: ");
    for(int i=0;i<size;i++){
        printf("%d ",brr[i]);
    }
    return 0;
}