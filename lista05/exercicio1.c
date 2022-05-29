#include <stdio.h>

int detectaPrimo(int p)
{
  int i;

  if (p > 2)
  {
    for (i = 2; i < p; i++)
    {
      if (p % i == 0)
      {
        return 0;
      }
    }
  }

  return 1;
}
