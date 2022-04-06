#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(void);

int main(void)
{
  int randomNumber, guess, rightGuesses = 0, wrongGuesses = 0, i;

  printf("\nCara - 0\nCoroa - 1\nDigite o seu palpite: ");
  scanf("%d", &guess);

  for (i = 1; i <= 10; ++i)
  {
    if (guess == getRandomNumber())
    {
      rightGuesses += 1;
    }
    else
    {
      wrongGuesses += 1;
    }
    if (i != 10)
    {
      printf("\nCara - 0\nCoroa - 1\nDigite o seu palpite: ");
      scanf("%d", &guess);
    }
  }

  printf("\nNúmero de acertos: %d \nNúmero de erros: %d", rightGuesses, wrongGuesses);
}

int getRandomNumber(void)
{
  int random;

  srand(time(NULL));
  random = rand() % 1 + 0;

  return random;
}