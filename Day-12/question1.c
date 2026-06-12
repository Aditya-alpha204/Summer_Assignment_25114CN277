#include<stdio.h>
#include<stdbool.h>
bool pal(int n){
    int s=0,r=0,p=n;
    while(n!=0){
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    return (s==p);
}
int main(){
    printf("Enter a number:\n");
    int n;
    scanf("%d",&n);
    if(1==pal(n)){
        printf("It is Palindrome");
    }
    else{
        printf("It is not Palindrome");
    }
}

