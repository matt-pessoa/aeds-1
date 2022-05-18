#include <stdio.h>
#include <stdlib.h>

int getRandomValue()
{
  int random;

  random = rand() % 60 + 1;

  return random;
}

int isEven(int num)
{
  if (num % 2 == 0)
  {
    return 1;
  }
  return 0;
}

int isPrime(int num)
{
  int i;

  if (i == 1 || i == 2)
  {
    return 1;
  }
  if (i == 0)
  {
    return 0;
  }

  for (i = 2; i < num; i += 1)
  {
    if (num % i == 0 && num != 0)
    {
      return 0;
    }
  }

  return 1;
}

int main()
{
  int randomValues[60], qEven = 0, qOdd = 0, qPrime = 0, max = 0, min = 0, sum = 0, i;
  double mean;

  for (i = 0; i < 60; i += 1)
  {
    randomValues[i] = getRandomValue();

    sum += randomValues[i];

    if (randomValues[i] > max)
    {
      max = randomValues[i];
    }
    if (randomValues[i] < min)
    {
      min = randomValues[i];
    }
    if (isPrime(randomValues[i]))
    {
      qPrime += 1;
    }
    if (isEven(randomValues[i]))
    {
      qEven += 1;
    }
    else
    {
      qOdd += 1;
    }
  }

  mean = sum / 60;

  printf("Qtd pares: %d\n Qtd ímpares: %d\n Qtd primos: %d\n Soma: %d, Média: %f, Max: %d, Min: %d", qEven, qOdd, qPrime, sum, mean, max, min);

  return 0;
}