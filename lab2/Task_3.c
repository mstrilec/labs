#include <stdio.h>
#include <math.h>

int main() {
    int a, y, z;

    printf("Введіть значення змінної a: ");
    scanf("%d", &a);

    printf("Введіть значення змінної y: ");
    scanf("%d", &y);

    printf("Введіть значення змінної z: ");
    scanf("%d", &z);

    float x = a * sqrt(pow(y, 2) - 2 * a) + pow(cos(z), 2);

    printf("Значення виразу x = %f\n", x);

    return 0;
}