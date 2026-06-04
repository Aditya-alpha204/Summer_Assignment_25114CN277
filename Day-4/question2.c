#include<stdio.h>
void main(){
    int n;
    printf("Enter range to print fibonacci series: ");
    scanf("%d",&n);
    int u=0;
    int v=1;
    int w=0;
    for(int i=1;i<=n;i++){
        
        w=u+v;
        u=v;
        v=w;
    }
    printf("The %dth fibonacci term is %d",n,w);
}