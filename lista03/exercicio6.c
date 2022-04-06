#include <stdio.h>

float alternatingSeries(float);

int main()
{
  int n;
  float sum;

  printf("Digite o valor de N: ");
  scanf("%d", &n);

  sum = alternatingSeries(n);

  printf("\nO valor da soma da série alternada com o denominador inicial %d é %f", n, sum);
}

float alternatingSeries(float n)
{
  int sign = 1, numerator, denom;
  float sum = 0;

  for (numerator = 1; numerator <= n; ++numerator)
  {
    denom = numerator - 1;
    sum += sign * (numerator / (n - denom));
    sign *= -1;
  }

  return sum;
};