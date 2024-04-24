#include <stdio.h>

int main() {
    int n, m, sum = 0;
    
    printf("Введіть кількість рядків в матриці: ");
    scanf("%d", &n);
    
    printf("Введіть кількість стовпців в матриці: ");
    scanf("%d", &m);
    
    int A[n][m];

    printf("Введіть елементи матриці %dx%d:\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        int max = A[i][0];
        for (int j = 1; j < m; j++) {
            if (A[i][j] > max) {
                max = A[i][j];
            }
        }
        sum += max;
    }

    printf("sum = %d\n", sum);

    return 0;
}