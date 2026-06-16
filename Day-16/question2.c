#include<stdio.h>
void main(){
    printf("Enter sizeof array: ");
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    int t=0,max=0,p;
    for(int i=0;i<size;i++){
        t=0;
        for(int j=0;j<size;j++){
           if(arr[i]==arr[j]){
            t++;
           }
        }
        if(t>max){
            max=t;
            p=arr[i];
        }
          
    }
    printf("Maximum frequency element is %d",p);

}