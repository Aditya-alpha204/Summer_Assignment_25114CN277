#include <stdio.h>
int sum(int n) {
    static int s=0;
    if (n == 0) {
        return s;
    } 
    else {
        int r=n%10;
        s=s*10+r;
        n=n/10;
        sum(n);
        return s;
    }
}
int main(){
    int n;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The reverse number is %d",sum(n));
    return 0;
}