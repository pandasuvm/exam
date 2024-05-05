#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    
    int n = strlen(a);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                char temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    printf("String in alphabetical order: %s\n", a);

    return 0;
}
