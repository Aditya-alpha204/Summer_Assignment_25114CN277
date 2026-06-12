#include <stdio.h>

void print_fibonacci(int u, int v, int limit) {
    int w = u + v;

    if (limit >= 0) {
        printf("%d ", u);
    }
    if (limit >= 1) {
        printf("%d ", v);
    }
    while (w <= limit) {
        printf("%d ", w);
        u = v;
        v = w;
        w = u + v;
    }
    printf("\n");
}

int main() {
    int limit;
    int u = 0, v = 1;
    
    printf("Enter the maximum value for the Fibonacci series: ");
    scanf("%d", &limit);
    print_fibonacci(u, v, limit);
    
    return 0;
}