#include <stdio.h>

int main() {
    int n, x;
    float result = 0.0;

    printf("Введіть натуральне число n: ");
    scanf("%d", &n);
    printf("Введіть ціле число x: ");
    scanf("%d", &x);

    for (int i = 1; i <= n; i++) {
        float product = 1.0;
        
        for (int j = 1; j <= i; j++) {
            product *= (float) j / x;
        }
        
        result += product;
    }

    printf("Результат: %0.2f\n", result);

    return 0;
}