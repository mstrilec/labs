#include <stdio.h>

int main() {
    double x1 = 0, y1 = 1;
    double x2 = 1, y2 = 2;
    double x, y;

    printf("Введіть координату точки A (x): ");
    scanf("%lf", &x);
    
    printf("Введіть координату точки A (y): ");
    scanf("%lf", &y);

    double m = (y2 - y1) / (x2 - x1);

    double c = y1 - m * x1;

    double y_on_line = m * x + c;

    if (y > y_on_line) {
        printf("Точка знаходиться вище за лінію\n");
    } else if (y < y_on_line) {
        printf("Точка знаходиться нижче за лінію\n");
    } else {
        printf("Точка знаходиться на лінії\n");
    }

    return 0;
}