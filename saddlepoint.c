#include <stdio.h>

int SumofDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void isSaddle(int a[][1000], int m) {
    for(int i = 0; i < m; i++) {
        int min = a[i][0];
        int col = 0;
        for(int j = 0; j < m; j++) {
            if(min > a[i][j]) {
                min = a[i][j];
                col = j;
            }
        }
        int max = a[0][col];
        for(int p = 0; p < m; p++) {
            if(a[p][col] > max) {
                max = a[p][col];
            }
        }
        if(max == min) {
            printf("Saddle point is %d found at a[%d][%d]\n", max, i, col);
            printf("Sum of digits of the saddle point number is: %d\n", SumofDigits(max));
        }
    }
}

int main() {
    int a[1000][1000];
    int m;

    printf("Enter the size of the matrix (m): ");
    scanf("%d", &m);

    printf("Enter elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The matrix entered is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    isSaddle(a, m);

    return 0;
}
