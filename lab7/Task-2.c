#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void initializeArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 201 - 100;
    }
}

void printArray(int array[], int size) {
    printf("Масив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int findMinAbsIndex(int array[], int size) {
    int minAbs = abs(array[0]);
    int minIndex = 0;

    for (int i = 1; i < size; i++) {
        if (abs(array[i]) < minAbs) {
            minAbs = abs(array[i]);
            minIndex = i;
        }
    }

    return minIndex;
}

int productBetweenZeros(int array[], int size, bool *foundZeros) {
    int firstZeroIndex = -1;
    int secondZeroIndex = -1;
    int product = 1;
    *foundZeros = false;

    for (int i = 0; i < size; i++) {
        if (array[i] == 0) {
            if (firstZeroIndex == -1) {
                firstZeroIndex = i;
            } else {
                secondZeroIndex = i;
                *foundZeros = true;
                break;
            }
        }
    }

    if (*foundZeros) {
        for (int i = firstZeroIndex + 1; i < secondZeroIndex; i++) {
            product *= array[i];
        }
    }

    return product;
}

int main() {
    int repeat;

    do {
        int size;
        printf("Введіть розмір масиву: ");

        if (scanf("%d", &size) != 1 || size <= 0) {
            printf("Некоректне введення розміру масиву. Будь ласка, введіть додатнє ціле число.\n");
            return 1;
        }

        srand(time(NULL));

        int array[size];
        initializeArray(array, size);
        printArray(array, size);

        int minAbsIndex = findMinAbsIndex(array, size);
        printf("Номер мінімального за модулем елемента масиву: %d\n", minAbsIndex);

        bool foundZeros;
        int product = productBetweenZeros(array, size, &foundZeros);
        if (foundZeros) {
            printf("Добуток елементів масиву, розташованих між першим й другим нульовими елементами: %d\n", product);
        } else {
            printf("В масиві недостатньо нульових елементів для обчислення добутку.\n");
        }

        printf("Натисніть 1, щоб повторити програму або 0, щоб вийти: ");
        if (scanf("%d", &repeat) != 1 || (repeat != 0 && repeat != 1)) {
            printf("Некоректний вибір. Програма завершена.\n");
            return 1;
        }
    } while (repeat == 1);

    return 0;
}
