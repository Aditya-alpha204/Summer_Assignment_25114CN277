#include<stdio.h>

int main(){
    printf("Enter size of array: ");
    int size;
    scanf("%d",&size);
    char arr[size];
    for(int i=0;i<size;i++){
        printf("Enter %d element: ",i+1);
        scanf(" %c",&arr[i]);
    }
    char k;
    int e=0;
    printf("Enter character to search: ");
    scanf(" %c",&k);
    for(int i=0;i<size;i++){
        if(arr[i]==k){
            e++;
        }
    }
    if(e>0){
        printf("the %c is %d times",k,e);
    }
    else{
        printf("Not Found");
    }
    return 0;

}