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
    int t=0,ma=0,p,s;
    printf("Enter sum to find its pair:\n");
    scanf("%d",&s);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
              if(arr[i]+arr[j]==s){
               printf("The pair for required sum of %d is (%d,%d)",s,arr[i],arr[j]);
               break;
               }
        }
    }   
    return 0;

}