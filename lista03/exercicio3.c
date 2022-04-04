#include <stdio.h>

int factorial(int);

int main()
{
  int num, fact;

  printf("Digite um número inteiro: ");
  scanf("%d", &num);

  fact = factorial(num);
  printf("\nO fatorial de %d é %d", num, fact);
}

int factorial(int num)
{
  if (num == 0)
  {
    return 0;
  }
  else if (num == 1)
  {
    return 1;
  }
  else
  {
    return num * factorial(num - 1);
  }
}
