#include <stdio.h>

int main()
{
  int num, QPares = 0, QImpares = 0;

  printf("Digite um número inteiro ou 9999 para finalizar a leitura: ");
  scanf("%d", &num);

  while (num != 9999)
  {
    if (num % 2 == 0)
    {
      QPares += 1;
    }
    else
    {
      QImpares += 1;
    }

    printf("Digite um número inteiro ou 9999 para finalizar a leitura: ");
    scanf("%d", &num);
  }

  printf("\nPares = %d \nÍmpares = %d", QPares, QImpares);
}