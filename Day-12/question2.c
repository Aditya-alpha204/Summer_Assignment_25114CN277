#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool arm(int n,int d){
      int s=0,r,k=n;
      while(n!=0){
        r=n%10;
        s=s+pow(r,d);
        n=n/10;
      }
      return (s==k);
}

int main(){
    printf("Enter number  to check armstrong or not: ");
    int n;
    scanf("%d",&n);
    int p=0,k=n;
    while(n!=0){
        n=n/10;
        p++;
    }
    if(1==arm(k,p)){
        printf("It is Armstrong Number");
    }
    else{
        printf("It is not Armstrong Number");
    }
    return 0;
}
