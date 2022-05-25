#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int num, part1, part2, resultado, index;

  for (index = 1000; index <= 9999; ++index)
  {
    part1 = (int)index / 100;
    part2 = (int)index % 100;
    resultado = part1 + part2;

    if (pow(resultado, 2) == index)
    {
      printf("\n %d", index);
    }
  }
}