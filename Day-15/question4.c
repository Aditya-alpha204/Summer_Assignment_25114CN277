#include<stdio.h>

int main(){
    printf("Enter size of array: ");
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    int ip=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            int t=arr[ip];
            arr[ip]=arr[i];
            arr[i]=t;
            ip++;
        } 
    }
    printf("The array with all zeroes at right : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
        }
    
    return 0;

}