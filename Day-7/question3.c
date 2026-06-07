#include <stdio.h>
int sum(int n) {
    if (n == 0) {
        return 0;
    } 
    else {
        int r=n%10;
        n=n/10;
        return r+sum(n);
    }
}
int main() {
    int n;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The sum of digits is %d",sum(n));
    return 0;
}