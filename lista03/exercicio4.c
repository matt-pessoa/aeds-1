#include <stdio.h>
#include <math.h>

float alternatingSeries(int);

int main()
{
  int nTermos;
  float result;

  printf("Digite a quantidade de termos: ");
  scanf("%d", &nTermos);

  result = alternatingSeries(nTermos);

  printf("\nA soma da sequência de %d termos é %f", nTermos, result);
}

float alternatingSeries(int n)
{
  float sum = 1;
  int sign = -1, i, denom;

  for (i = 1; i <= n * 2; i += 2)
  {
    denom = i + 2;
    sum += sign * (1 / pow(denom, 3));
    sign *= -1;
  }

  return sum;
}