// Faça um programa que leia um conjunto indeterminado de números inteiros positivos e imprima o maior, o menor e a média aritmética desse conjunto de dados. (Flag -1).

#include <stdio.h>
#include <math.h>

int main()
{
  int contador = 0;
  float num, soma = 0, media;

  printf("Digite um número inteiro ou -1 para finalizar: ");
  scanf("%f", &num);

  while (num != -1)
  {
    soma += num;
    contador += 1;

    printf("Digite um número inteiro ou -1 para finalizar: ");
    scanf("%f", &num);
  }

  media = soma / contador;

  printf("\nA média é %f", media);
}