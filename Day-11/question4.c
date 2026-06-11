#include<stdio.h>
fact(int a){
    int m=1;
    for(int i=a;i>=1;i--){
        m=m*i;
    }
    return m;
}

int main(){
    int a;
    printf("Enter number to find its factorial:\n");
    scanf("%d",&a);
    printf("Factorial of %d is %d",a,fact(a));
    return 0;
}