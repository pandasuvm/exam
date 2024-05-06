#include<stdio.h>

int fibonacci(int a, int n) {
    int fib[1000];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i < a; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    int c = fib[n];
    return c;
}

int main() {
    int n, index;
    printf("Enter the length of 1D array: ");
    scanf("%d", &n);
    int arr[1000];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the Fibonacci index: ");
    scanf("%d", &index);
    int p=fibonacci(n,index);
    printf("%d",arr[p-1]);

    return 0;
}
