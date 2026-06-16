#include<stdio.h>
void main(){
    printf("Enter range of numbers: ");
    int size;
    scanf("%d",&size);
    int arr[size];
    printf("Enter numbers within range of %d with a missing number in between\n",size);
    for(int i=0;i<size;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    int s=0;
    int sum=(size+1)*(size+2)/2;
    for(int i=0;i<size;i++){
        s=s+arr[i];
          
    }
    if(s!=sum){
        int miss=sum-s;
        printf("The missing number is %d",miss);
    }
    else{
        printf("Enter numbers with a missing number");
    }

}