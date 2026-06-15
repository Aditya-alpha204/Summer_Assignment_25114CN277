#include<stdio.h>

void main(){
    printf("Enter size of array: ");
    int size;
    scanf("%d",&size);
    char arr[size];
    char brr[size];
    for(int i=0;i<size;i++){
        printf("Enter %d element: ",i+1);
        scanf(" %c",&arr[i]);
    }
    for(int i=0;i<size;i++){
        brr[size-1-i]=arr[i];
    }
    printf("The Reverse array is: ");
    for(int i=0;i<size;i++){
        printf("%c  ",brr[i]);
    }

}