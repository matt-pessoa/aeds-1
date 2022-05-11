#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int getRandomValue()
{
  int random;

  random = rand();

  return random;
}

int main()
{
  int randomValues[20], i;

  for (i = 0; i < 20; i += 1)
  {
    randomValues[i] = getRandomValue();
    printf("Vetor[%d] = %d \n", i, randomValues[i]);
  }

  return 0;
}
