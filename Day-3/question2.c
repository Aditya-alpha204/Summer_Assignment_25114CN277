#include<stdio.h>
void main(){
    int r;
    printf("Enter range:");
    scanf("%d",&r);


    for(int j=2;j<=r;j++){
        int is_prime=1;
        for(int i=2;i<=j/2;i++){
            if(j%i==0){
                is_prime==0;
                break;
            }
        }
        if(is_prime==1){
            printf("%d ",j);
        }
    }
} 