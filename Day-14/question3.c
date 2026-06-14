#include<stdio.h>
#include<limits.h>

int main(){
    printf("Enter size of array: ");
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    int large=arr[0];
    int p=0;
    for(int i=1;i<size;i++){
        if(arr[i]>large){
            large=arr[i];
            p=i;
        } 
    }
    int sl=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>sl && arr[i]!=arr[p]){
            sl=arr[i];
        }
    }
    printf("%d is second largest\n",sl);
    return 0;

}