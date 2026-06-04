#include<stdio.h>
void main(){
    int n;
    printf("Enter range to print fibonacci series: ");
    scanf("%d",&n);
    printf("0 1 ");
    int u=1;
    int v=1;
    int w=1;
    while(w<=n){
        printf("%d ",w);
        w=u+v;
        u=v;
        v=w;
    }
}