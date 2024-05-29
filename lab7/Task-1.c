#include <stdio.h>

double f(double x, double y) {
    return (x * x + x * y - y * y) / (1 + x * x + y * y);
}

int main() {
    int repeat;

    do {
        double a, b;

        printf("Введіть значення a: ");
        if (scanf("%lf", &a) != 1) {
            printf("Некоректне введення значення a.\n");
            return 1;
        }

        printf("Введіть значення b: ");
        if (scanf("%lf", &b) != 1) {
            printf("Некоректне введення значення b.\n");
            return 1;
        }

        double u = f(1.7, a) + f(b, a) + f(a + b, b - a);

        printf("Значення u: %lf\n", u);

        printf("Натисніть 1, щоб повторити програму або 0, щоб вийти: ");
        if (scanf("%d", &repeat) != 1 || (repeat != 0 && repeat != 1)) {
            printf("Некоректний вибір. Програма завершена.\n");
            return 1;
        }
    } while (repeat == 1);

    return 0;
}