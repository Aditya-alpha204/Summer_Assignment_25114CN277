#include<stdio.h>
void main(){
    int n;
    printf("Enter Number To check Perfect or not");
    scanf("%d",&n);
    int s=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            s=s+i;
        }
    }
    if(s==n){
        printf("Perfect Number");
    }
    else{
        printf("Not Perfect Number");
    }
    
}