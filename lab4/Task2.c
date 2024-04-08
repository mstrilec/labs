#include <stdio.h>

// A

int mainA() {
    int sum = 0;
    
    for (int i = 1; i < 25; i++) {
        if (i % 5 == 0) {
            sum += i;
        }
    }

    int cube = sum * sum * sum;
    printf("Куб суми всіх чисел, кратних 5, у діапазоні (1;25): %d\n", cube);
    
    return 0;
}

// B

int mainB()
{
  int sum = 0;
  int i = 1;

  while (i < 25)
  {
    if (i % 5 == 0)
    {
      sum += i;
    }
    i++;
  }

  int cube = sum * sum * sum;
  printf("Куб суми всіх чисел, кратних 5, у діапазоні (1;25): %d\n", cube);

  return 0;
}

// C

int mainC()
{
  int sum = 0;
  int i = 1;

  do
  {
    if (i % 5 == 0)
    {
      sum += i;
    }
    i++;
  } while (i < 25);

  int cube = sum * sum * sum;
  printf("Куб суми всіх чисел, кратних 5, у діапазоні (1;25): %d\n", cube);

  return 0;
}
