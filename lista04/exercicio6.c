#include <stdio.h>
#include <stdlib.h>

int getRandomValue()
{
  int random;

  random = rand() % 100;

  return random;
}

int main()
{
  int randomValues[20], i, j, temp;

  printf("Desordenado:\n");
  for (i = 0; i < 20; i += 1)
  {
    randomValues[i] = getRandomValue();
    printf("%d\n", randomValues[i]);
  }

  printf("\nValores ordenados:");
  for (i = 0; i < 20; i += 1)
  {
    for (j = i + 1; j < 20; j += 1)
    {
      if (randomValues[i] > randomValues[j])
      {
        temp = randomValues[i];
        randomValues[i] = randomValues[j];
        randomValues[j] = temp;
      }
    }
    printf("%d\n", randomValues[i]);
  }

  return 0;
}