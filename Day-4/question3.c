#include<stdio.h>
#include<math.h>
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int p=n;
    int k=n;
    int r;
    int a=0;
    int j=0;
    while(n!=0){
        n=n/10;
        j++;
    }
    while(p!=0){
       r=p%10;
       p=p/10;
       a=a+(int)(pow(r,j));

    }
    if(k==a){
        printf("It is Armstrong Number");
    }
    else{
        printf("Not Armstrong");
    }

}