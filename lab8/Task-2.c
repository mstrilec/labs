#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inputArray(int *array, int n) {
    srand(time(NULL));
    printf("Масив: ");
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 201 - 100;
        printf("%d ", array[i]);
    }
    printf("\n");
}

int findMinAbsIndex(int *array, int n) {
    int minAbsIndex = 0;
    for (int i = 1; i < n; i++) {
        if (abs(array[i]) < abs(array[minAbsIndex])) {
            minAbsIndex = i;
        }
    }
    return minAbsIndex;
}

int productBetweenZeros(int *array, int n) {
    int firstZeroIndex = -1;
    int secondZeroIndex = -1;
    int product = 1;

    for (int i = 0; i < n; i++) {
        if (array[i] == 0) {
            if (firstZeroIndex == -1)
                firstZeroIndex = i;
            else {
                secondZeroIndex = i;
                break;
            }
        }
    }

    if (firstZeroIndex != -1 && secondZeroIndex != -1) {
        for (int i = firstZeroIndex + 1; i < secondZeroIndex; i++) {
            product *= array[i];
        }
    }

    return product;
}

int main() {
    int repeat;

    do {
        int n;
        printf("Введіть розмір масиву: ");
        if (!(scanf("%d", &n)) || n <= 0) {
            printf("Некоректне введення розміру масиву. Будь ласка, введіть додатне ціле число.\n");
            return 1;
        }

        int array[n];

        inputArray(array, n);

        int minAbsIndex = findMinAbsIndex(array, n);
        printf("Номер мінімального за модулем елемента масиву: %d\n", minAbsIndex);

        int product = productBetweenZeros(array, n);
        printf("Добуток елементів масиву, розташованих між першим й другим нульовими елементами: %d\n", product);

        printf("Натисніть 1, щоб повторити програму або 0, щоб вийти: ");
        if (!(scanf("%d", &repeat)) || (repeat != 0 && repeat != 1)) {
            printf("Некоректний вибір. Програма завершена.\n");
            return 1;
        }
    } while (repeat == 1);

    return 0;
}
