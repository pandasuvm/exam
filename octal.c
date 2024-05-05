#include <stdio.h>
int main() {
    int num, rem, octal = 0, base = 1;
    printf("Enter the decimal number: ");
    scanf("%d", &num);
    while (num != 0) {
        rem = num % 8;
        octal += rem * base;
        num /= 8;
        base *= 10;
    }
    printf("The octal number is: %d", octal);
    return 0;
}
