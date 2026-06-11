#include<stdio.h>
#include<stdbool.h>
bool prime(int a){
    int p=0;
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            p++;
        }
    }
    return (p>0);
}

int main(){
    int a;
    printf("Enter number for checking prime or not:\n");
    scanf("%d",&a);
    printf("%d is Prime?%d",a,prime(a));
    return 0;
}