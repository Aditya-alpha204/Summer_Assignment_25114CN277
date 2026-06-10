#include<stdio.h>
void main(){
    int k=5;
    for(int i=1;i<=5;i++){
        for(int n=1;n<=k-i;n++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%c",'A'+j-1);
            if(j==i){
                for(int m=(int)('A'+j-2);m>=(int)('A');m--){
                    printf("%c",(char)(m));
                }
            }
        }
        printf("\n");
    }
}
