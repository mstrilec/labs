#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, m;
    printf("Введіть розміри матриці n та m: ");
    scanf("%d %d", &n, &m);

    double A[n][m];
    
    srand(time(NULL));
    printf("Згенерована матриця:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = (rand() % 201) - 100;
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }

    double maxSum = 0, minSum = 0;
    int maxIndex = 0, minIndex = 0;
    
    for (int i = 0; i < n; i++) {
        double sum = 0;
        
        for (int j = 0; j < m; j++) {
            sum += A[i][j];
        }
        
        if (sum > maxSum) {
            maxSum = sum;
            maxIndex = i;
        }
        
        if (sum < minSum) {
            minSum = sum;
            minIndex = i;
        }
    }

    for (int i = 0; i < m; i++) {
        double temp = A[maxIndex][i];
        
        A[maxIndex][i] = A[minIndex][i];
        A[minIndex][i] = temp;
    }

    printf("Матриця після обміну рядків:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}