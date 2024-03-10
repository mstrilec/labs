#include <stdio.h>

int main()
{
  int a, b, c;

  printf("Введіть a: ");
  scanf("%d", &a);

  printf("Введіть b: ");
  scanf("%d", &b);

  printf("Введіть c: ");
  scanf("%d", &c);

  float result = (3 * a - 4 * b + 5 * c) / (a * b + 2 * b * c + 3 * a * c) - a * b - c / 4;

  printf("Значення виразу y = %f\n", result);

  return 0;
}