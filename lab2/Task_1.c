#include <stdio.h>

int main() {
    int num1, num2;

    printf("Введіть перше ціле число: ");
    scanf("%d", &num1);

    printf("Введіть друге ціле число: ");
    scanf("%d", &num2);

    printf("Залишок від ділення: %d\n", num1 % num2);
    printf("Різниця: %d\n", num2 - num1);
    printf("Сума: %d\n", num1 + num2);

    return 0;
}