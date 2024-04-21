#include <stdio.h>

int main() {
    int n, i;
    
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);

    int a[n];

    printf("Введіть елементи масиву:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sum = 0;
    for (i = 0; i < n; i++) {
        if (a[i] % 5 == 0) {
            sum += a[i];
        }
    }

    printf("Сума елементів масиву, які кратні 5: %d\n", sum);

    return 0;
}
