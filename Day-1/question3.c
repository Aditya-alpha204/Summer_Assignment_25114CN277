#include<stdio.h>
void main(){
    int n;
    printf("Enter number to find its factorial");
    scanf("%d",&n);
    int i=1;
    int m=1;
    while(i<=n){
        m=m*i;
        i++;
    }
    printf("Factorial of %d is %d",n,m);
}