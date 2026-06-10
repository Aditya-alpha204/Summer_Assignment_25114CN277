#include<stdio.h>
void main(){
    for(int n=0;n<=3;n++){
        for(int i=1;i<=n+1;i++){
            printf("%c ",'A'+n);
        }
        printf("\n");
    }
}