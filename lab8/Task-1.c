#include <stdio.h>

int main() {
    int repeat;

    do {
        int n;

        printf("Введіть розмір масиву: ");
        if (!(scanf("%d", &n)) || n <= 0) {
            printf("Некоректне введення або недопустимий розмір масиву.\n");
            return 1;
        }

        int a[n];

        printf("Введіть елементи масиву:\n");
        for (int i = 0; i < n; i++) {
            if (!(scanf("%d", &a[i]))) {
                printf("Некоректне введення числа.\n");
                return 1;
            }
        }

        int *ptr = a;
        int max = *ptr;

        for (int i = 1; i < n; i++) {
            ptr++;
            if (i % 2 == 0 && *ptr > max) {
                max = *ptr;
            }
        }

        printf("Максимальний елемент з його значень з парними номерами: %d\n", max);

        printf("Натисніть 1, щоб повторити програму або 0, щоб вийти: ");
        if (!(scanf("%d", &repeat)) || (repeat != 0 && repeat != 1)) {
            printf("Некоректний вибір. Програма завершена.\n");
            return 1;
        }
    } while (repeat == 1);

    return 0;
}