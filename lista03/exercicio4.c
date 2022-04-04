#include <stdio.h>

int alternatingSeries(int);

int main()
{
  int nTermos;

  printf("Digite a quantidade de termos: ");
  scanf("%d", &nTermos);

  printf("A soma da sequência de %d termos é %f", nTermos, alternatingSeries(nTermos));
}

int alternatingSeries(int n)
{
}