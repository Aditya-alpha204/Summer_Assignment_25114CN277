#include<stdio.h>
#include<math.h>
void main(){
    int n;
    printf("Enter range: ");
    scanf("%d",&n);
    int p=n,s=n,k=n,r=0,a=0,j=0;
    while(n!=0){
        n=n/10;
        j++;
    }
    for(int i=1;i<=s;i++){
        p=i;
        while(p!=0){
           r=p%10;
           p=p/10;
           a=a+(int)(pow(r,j));

        }
        if(k==a){
            printf("%d",i);
        }
        
    }
}    