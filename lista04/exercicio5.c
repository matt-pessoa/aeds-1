#include <stdio.h>
#include <stdlib.h>

int getRandomValue()
{
  int random;

  random = rand();

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
    if (num % i == 0)
    {
      return 0;
    }
  }

  return 1;
}

int main()
{
  int randomValues[20], qEven = 0, qOdd = 0, qPrime = 0, i, j;

  for (i = 0; i < 20; i += 1)
  {
    randomValues[i] = getRandomValue();

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

  printf("Qtd pares: %d\n Qtd ímpares: %d\n Qtd primos: %d", qEven, qOdd, qPrime);

  return 0;
}