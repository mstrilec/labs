#include <stdio.h>
#include <math.h>

int main()
{
  float a = 0, b = 3, dx = 0.05;
  float x, y;

  printf("\n*********************************\n");
  printf("Результати обчислення функції y = 4^(-cos(x))\n");
  printf("*********************************\n");
  printf("X\t\tY=f(x)\n");
  printf("*********************************\n");

  x = a;
  while (x <= b)
  {
    if (cos(x) == 0)
    {
      printf("Невизначений результат для x = %f\n", x);
    }
    else
    {
      y = pow(4, -cos(x));
      printf("%0.2f\t\t%0.2f\n", x, y);
    }
    x += dx;
  }

  return 0;
}