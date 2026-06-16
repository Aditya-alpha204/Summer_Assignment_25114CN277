#include<stdio.h>
int main(){
    printf("Enter sizeof array: ");
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    int t=0,ma=0,p;
    for(int i=0;i<size;i++){
        t=0;
        for(int j=0;j<size;j++){
           if(arr[i]==arr[j]){
            t++;
           }
        }
        if(t>ma){
            ma=t;
            p=arr[i];
        }
          
    }
    printf("Maximum frequency element is %d with frequency %d",p,ma);
    return 0;

}