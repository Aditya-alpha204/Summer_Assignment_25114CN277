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
    int left=0;
    int right=si-1;
    int mid,n;
    printf("Enter number to search");
    scanf("%d",&n);
    while(left<=right){
        int mid=(left+right)/2;
        if(n==arr[mid]){
            printf("Element found .having index %d",mid);
        }
        else if(n>arr[mid]){
            left=arr[mid+1];
        }
        else if(n<arr[mid]){
            right=arr[mid-1];
        }

    }
    return 0;
}