#include<stdio.h>
void main(){
    int n;
    printf("Enter Number to check Strong or not");
    scanf("%d",&n);
    int p=n;
    int m=1,s=0,r=0;
    while(n!=0){
        m=1;
        r=n%10;
        n=n/10;
        for(int i=1;i<=r;i++){
            m=m*i;
        }
        s=s+m;
    }
    if(s==p){
        printf("Strong Number");
    }
    else{
        printf("Not Strong Number");
    }
}