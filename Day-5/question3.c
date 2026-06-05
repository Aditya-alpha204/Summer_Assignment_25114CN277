#include<stdio.h>
void main(){
    int n;
    printf("Enter Number to print its factors:");
    scanf("%d",&n);
    printf("The factors are:\n");
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
}