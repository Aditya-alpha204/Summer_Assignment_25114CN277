#include<stdio.h>
int main(){
    printf("Enter size of array :\n ");
    int si;
    scanf("%d",&si);
    int arr[si];
    for(int i=0;i<si;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    int t;
    for(int i=0;i<si-1;i++){
        for(int j=0;j<si-1;j++){
            if(arr[j]>arr[j+1]){
                t=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=t;

            }
        }
    }
    printf("The sorted array is: ");
    for(int i=0;i<si;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}