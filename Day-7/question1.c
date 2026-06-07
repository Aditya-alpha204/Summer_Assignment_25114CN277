#include<stdio.h>

fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }

    int main(){
        int n;
        printf("Enter a number");
        scanf("%d",&n);
        int result=fact(n);
        printf("The factorial of %d is %d ",n,result);
        return 0;
    }
}