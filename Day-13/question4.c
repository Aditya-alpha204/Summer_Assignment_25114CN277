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
    }
    int e=0,od=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            e++;
        }
        else{
            od++;
        }
    }
    printf("There are %d even elements\n",e);
    printf("%d odd elements",od);

}