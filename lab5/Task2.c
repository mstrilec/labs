#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i, variant;
    int count = 0;
    int sum = 0;
    int maxIndex = 0;
    int maxValue;

    printf("Введіть 1 для ручного введення даних або 2 для генерації випадкових даних: ");
    scanf("%d", &variant);

    printf("Введіть розмір масиву: ");
    scanf("%d", &n);
    int a[n];

    switch (variant) {
        case 1:
            printf("Введіть елементи масиву:\n");
            
            for (i = 0; i < n; i++) {
                scanf("%d", &a[i]);
            }
            
            break;
        case 2:
            srand(time(NULL));
            printf("Елементи масиву:\n");
            
            for (i = 0; i < n; i++) {
                a[i] = rand() % 201 - 100;
                printf("%d ", a[i]);
            }
            printf("\n");
            
            break;
        default:
            printf("Невірний варіант вводу.\n");
            
            return 0;
    }

    for (i = 0; i < n; i++) {
        if (a[i] > 5) {
            count++;
        }
    }

    maxValue = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > maxValue) {
            maxValue = a[i];
            maxIndex = i;
        }
    }

    for (i = maxIndex + 1; i < n; i++) {
        sum += a[i];
    }

    printf("Кількість елементів масиву, більших за п'ять: %d\n", count);
    printf("Сума елементів масиву після максимального елемента: %d\n", sum);

    return 0;
}