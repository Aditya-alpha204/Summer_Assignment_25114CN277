#include<stdio.h>
void main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int r=0;
    int s=1;
    while(n!=0){
        r=n%10;
        n=n/10;
        s=s*r;
    }
    printf("The Product of digits is %d",s);
}