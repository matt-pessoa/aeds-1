#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int getRandomNumber(int, int);

int main()
{
  int numberOfGuesses = 0, smallest = 1, largest = 1023, guess, i;
  char sign[2];

  for (i = 1; i < 10; ++i)
  {
    guess = getRandomNumber(smallest, largest);
    printf("%d", largest);
    numberOfGuesses += 1;
    printf("\nSeu número é >, < ou = a %d? ", guess);
    scanf("%s", sign);

    if (!strcmp(sign, "="))
    {
      printf("\nAcertei em %d tentativas!", numberOfGuesses);
      return 1;
    }
    if (!strcmp(sign, ">"))
    {
      smallest = guess;
    }
    if (!strcmp(sign, "<"))
    {
      largest = guess;
    }
  }
  printf("Não fui capaz de acertar o seu número :(");
  return 0;
}

int getRandomNumber(int smallest, int largest)
{
  int random;

  srand(time(NULL));
  random = (rand() % (largest - smallest)) + smallest;

  return random;
}