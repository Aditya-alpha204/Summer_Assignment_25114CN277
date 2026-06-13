#include<stdio.h>

void main(){
    printf("Enter size of array: ");
    int size,s=0;
    float avg;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    avg=s/size;
    printf("The sum array element is:%d ",s);
    printf("The average of elements is %d",avg);

}