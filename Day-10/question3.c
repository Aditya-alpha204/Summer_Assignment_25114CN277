#include<stdio.h>
void main(){
    int k=5;
    for(int i=1;i<=5;i++){
        for(int n=1;n<=k-i;n++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
            if(j==i){
                for(int m=j-1;m>=1;m--){
                    printf("%d",m);
                }
            }
        }
        printf("\n");
    }
}
