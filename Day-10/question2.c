#include<stdio.h>
void main(){
    int k=5;
    int p=k;
    for(int n=1;n<=k;n++){
        for(int i=0;i<=n-1;i++){
            if(i!=0){
             printf(" ");
            }
        }
        for(int j=2*p-1;j>=1;j--){
            printf("*");
        }
        printf("\n");
        p-=1;
    }
}