#include <stdio.h>

int main() {
    int postal_code;

    printf("Введіть поштовий індекс: ");
    scanf("%d", &postal_code);

    switch (postal_code) {
        case 58000:
            printf("Місто: Чернівці\n");
            break;
        case 01001:
            printf("Місто: Київ\n");
            break;
        case 61000:
            printf("Місто: Харків \n");
            break;
        case 79000:
            printf("Місто: Львів\n");
            break;
        case 49089:
            printf("Місто: Дніпро\n");
            break;
        default:
            printf("Місто для цього поштового індексу не визначено.\n");
    }

    return 0;
}