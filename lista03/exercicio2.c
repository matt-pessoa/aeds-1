#include <stdio.h>

int main()
{
  int contador = 0, maior, menor;
  float num, soma = 0, media;

  printf("Digite um número inteiro ou -1 para finalizar: ");
  scanf("%f", &num);

  maior = num;
  menor = num;

  while (num != -1)
  {
    soma += num;
    contador += 1;

    if (num > maior)
    {
      maior = num;
    }
    if (num < menor)
    {
      menor = num;
    }

    printf("Digite um número inteiro ou -1 para finalizar: ");
    scanf("%f", &num);
  }

  media = soma / contador;

  printf("\nA média é %f \nO maior número é %d \nO menor número é %d", media, maior, menor);
}