#include<stdio.h>
void main(){
    int k=5;
    for(int n=1;n<=k;n++){
        for(int i=1;i<=k-n;i++){
            printf(" ");
        }
        for(int j=1;j<=2*n-1;j++){
            printf("*");
        }
        printf("\n");
    }
}