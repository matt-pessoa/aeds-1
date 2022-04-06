#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int);
int isValid(int, bool);

int main()
{
  int n;
  bool palindrome;

  printf("\nDigite um número inteiro: ");
  scanf("%d", &n);

  isValid(n, isPalindrome(n));
}

bool isPalindrome(int n)
{
  int rem, reversedNum = 0, normalNum = n;

  while (n != 0)
  {
    rem = n % 10;
    reversedNum = (reversedNum * 10) + rem;
    n = n / 10;
  }

  if (reversedNum == normalNum)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int isValid(int n, bool palindrome)
{
  if (n >= 10)
  {
    if (palindrome)
    {
      printf("\nO número %d é um palíndromo!", n);
    }
    else
    {
      printf("\nO número %d não é um palíndromo", n);
    }
  }
  else
  {
    printf("Insira um número de, pelo menos, 2 dígitos!");
    main();
  }
}