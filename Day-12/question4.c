#include<stdio.h>
#include<stdbool.h>

bool perfect(int n){
    int s=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
           s=s+i;
        }
    }
    return (s==n);
}

int main(){
    printf("Enter number to check perfect or not: ");
    int n;
    scanf("%d",&n);
    if(1==perfect(n)){
        printf("IT is perfect number");
    }
    else{
        printf("It is not perfect number");
    }
}