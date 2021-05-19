#include <iostream>

using namespace std;

int main()
{
  int num1, num2;

  cout << "Digite o primeiro numero: ";
  cin >> num1;
  cout << "Digite o segundo numero: ";
  cin >> num2;

  if (num1 > num2)
    num1 = num2;

  for (int i = num1; i < num2; i++)
  {
    printf("%d ", i);
  }
  return 0;
}