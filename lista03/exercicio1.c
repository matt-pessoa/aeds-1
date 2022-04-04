//  Faça um algoritmo que leia um conjunto de números (X) e imprima a quantidade de números pares (QPares) e a quantidade de números impares (QImpares) lidos. Admita que o valor 9999 é utilizado como sentinela (FLAG) para fim de leitura. Ex.: 1,2,3,4,5,9999 => Pares=2 Impares=3

#include <stdio.h>
#include <math.h>

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