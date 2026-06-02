#include<stdio.h>
void main(){
    int n;
    printf("Enter large digits numbers:\n");
    scanf("%d",&n);
    int r=0;
    int s=0;
    while(n!=0){
       r=n%10;
       n=n/10;
       s=s+r;
    }
    printf("Sum of digits=%d",s);
}