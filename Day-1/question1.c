#include<stdio.h>
void main()
{
    int n;
    printf("Enter number for sum");
    scanf("%d",&n);
    int i=1;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("sum of first %d numbers = %d",n,sum);
}