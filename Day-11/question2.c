#include<stdio.h>
double find_max(double a,double b){
    if(a>b){
        return a;
    }
    else if(b>a){
        return b;
    }
    else{
        printf("Please enter correct input");
    }
}

int main(){
    double a,b;
    printf("Enter two numbers for showing maximum:\n");
    scanf("%lf",&a);
    scanf("%lf",&b);
    printf("%lf is greater",find_max(a,b));
    return 0;
}