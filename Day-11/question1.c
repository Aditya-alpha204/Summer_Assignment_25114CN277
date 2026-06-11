#include<stdio.h>
double add(double a,double b){
    return a+b;
}

int main(){
    double a,b;
    printf("Enter two numbers for adding:\n");
    scanf("%lf",&a);
    scanf("%lf",&b);
    printf("Sum is %lf",add(a,b));
    return 0;
}