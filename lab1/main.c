#include <stdio.h>
#include <math.h>

int distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int x1 = 0, y1 = 0, x2 = 0, y2 = 3, x3 = 4, y3 = 0;
    
    int a = distance(x1, y1, x2, y2);
    int b = distance(x2, y2, x3, y3);
    int c = distance(x3, y3, x1, y1);
    
    int P = a + b + c;
    
    int s = P / 2;
    int S = sqrt(s * (s - a) * (s - b) * (s - c));
    
    printf("Периметр трикутника: %d\n", P);
    printf("Площа трикутника: %d\n", S);
    
    return 0;
}