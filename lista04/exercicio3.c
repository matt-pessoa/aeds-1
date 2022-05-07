#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int getRandomValue()
{
  int random;

  srand(time(NULL));
  random = rand();

  return random;
}

int main()
{
  int randomValues[20], max, min, sum = 0, i;
  double mean;

  for (i = 0; i < 20; i += 1)
  {
    randomValues[i] = getRandomValue();
  }

  max = randomValues[0];
  min = randomValues[0];

  for (i = 0; i < 20; i += 1)
  {
    sum += randomValues[i];
    if (randomValues[i] > max)
    {
      max = randomValues[i];
    }
    if (randomValues[i] < min)
    {
      min = randomValues[i];
    }
  }

  mean = sum / 20;

  printf("\nMaior número: %d \nMenor número: %d \nMédia: %f", max, min, mean);

  return 0;
}
