#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1, num2;

  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);

  if (num1 > num2)
    num1 = num2;

  for (int i = num1; i < num2; i++)
  {
    printf("%d ", i);
  }
  return 0;
}