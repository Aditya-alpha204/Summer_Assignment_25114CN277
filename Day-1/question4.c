#include<stdio.h>
void main(){
    long n;
    printf("Enter long digit number");
    scanf("%ld",&n);
    long p=n;
    int i;
    if (n==0){
      i=1;
    } else { 
       while(n!=0){
        n=n/10;
        i=i+1;
    }
}
    printf("Number of digits in %ld is %d",p,i);
}










                          


















                          





























                                    





























                                               