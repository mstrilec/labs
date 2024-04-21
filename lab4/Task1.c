#include <stdio.h>
#include <math.h>

int main() {
    int y, z;
    
    printf("Введіть значення y: ");
    scanf("%d", &y);
    
    printf("Введіть значення z: ");
    scanf("%d", &z);
    
    while (z - 2 * y == 0 || 2 * y >= z) {
        printf("Помилка: зазначені значення y та z призводять до невизначеного результату. Введіть інші значення.\n");
        
        printf("Введіть значення y: ");
        scanf("%d", &y);
        
        printf("Введіть значення z: ");
        scanf("%d", &z);
    }
    
    double t = sqrt(3.0 * y / (z - 2 * y)) - y * z;
    
    printf("Значення функції t: %0.2lf\n", t);
    
    return 0;
}
