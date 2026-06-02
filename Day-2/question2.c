#include<stdio.h>
void main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int p=n;
    int r=0;
    int s=0;
    while(n!=0){
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    printf("The Revese of %d is %d",n,s);
}