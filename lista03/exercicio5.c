#include <stdio.h>

int fib(int);

int main()
{
  int nTermos, curVal;

  printf("Digite um número inteiro: ");
  scanf("%d", &nTermos);

  for (curVal = 1; curVal <= nTermos; ++curVal)
  {
    printf("\n%d", fib(curVal));
  }
}

int fib(int num)
{
  if (num == 1 || num == 2)
    return 1;
  else
    return (fib(num - 1) + fib(num - 2));
}