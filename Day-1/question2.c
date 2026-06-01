#include<stdio.h>
void main(){
    int n;
    printf("Enter number for table");
    scanf("%d",&n);
    int i=1;
    while(i<=10){
        int m=n*i;
        printf("%d*%d=%d\n",n,i,m);
        i++;
    }
}