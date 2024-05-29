#include <stdio.h>
#include <math.h>

int main() {
    int b, c;
    double a;
    int choice;

    printf("Оберіть варіацію завдання (1 для А, 2 для Б): ");
    scanf("%d", &choice);

    printf("Введіть значення b: ");
    scanf("%d", &b);
    
    printf("Введіть значення c: ");
    scanf("%d", &c);

    switch (choice) {
        case 1:
            if (b == 1) {
                a = 4 * b + 5 * c;
            }
            if (b == 2) {
                if (4 - b * c >= 0) {
                    a = sqrt(4 - b * c);
                } else {
                    printf("Не можливо обчислити значення виразу, бо вираз під коренем від'ємний.\n");
                    return 0;
                }
            }
            if (b == 3) {
                if (c != 0) {
                    a = (b - 2) / pow(c, 2);
                } else {
                    printf("Не можливо обчислити значення виразу, бо знаменник дорівнює нулю.\n");
                    return 0;
                }
            }
            if (b != 1 && b != 2 && b != 3) {
                printf("Не визначено обчислення для b = %d\n", b);
                return 0;
            }
            break;

        case 2:
            if (b == 1) {
                a = 4 * b + 5 * c;
            } else if (b == 2) {
                if (4 - b * c >= 0) {
                    a = sqrt(4 - b * c);
                } else {
                    printf("Не можливо обчислити значення виразу, бо вираз під коренем від'ємний.\n");
                    return 0;
                }
            } else if (b == 3) {
                if (c != 0) {
                    a = (b - 2) / pow(c, 2);
                } else {
                    printf("Не можливо обчислити значення виразу, бо знаменник дорівнює нулю.\n");
                    return 0;
                }
            } else {
                printf("Не визначено обчислення для b = %d\n", b);
                return 0;
            }
            break;

        default:
            printf("Невірний вибір варіації завдання.\n");
            return 0;
    }

    printf("Результат: a = %f\n", a);

    return 0;
}
