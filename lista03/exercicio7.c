#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int);

int main()
{
  int i;

  for (i = 10000; i <= 99999; ++i)
  {
    isPalindrome(i);
  }
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
    printf("\n%d", normalNum);
    return true;
  }
  else
  {
    return false;
  }
}