#include<stdio.h>
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int i=1;
    int p=0;
    while(i<=n/2){
        if(n%i==0){
            p++;
        }
        i++;
    }
    if (p>1){
        printf("Not prime");
    }
    else{
        printf("Prime");
    }
}