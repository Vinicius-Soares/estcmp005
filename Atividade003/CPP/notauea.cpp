#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declarando as variáveis da nota 1 e 2 e lendo as entradas
	float p1, p2; 
	cin >> p1 >> p2; 
	//a nota da média é calculada com a soma das duas notas sobre 2
	float np = (p1 + p2) / 2;
	//se a média é maior que 8 ele imprime Aprovado
	if (np >= 8.0)
	{
		cout << fixed << setprecision(2) << "Aprovado: " << np << endl;
	}
	else
	{
		//declarando e recebendo a nota final 
		float pf;
		cin >> pf;
		//a média final é calculada com a soma das três notas divididas por 3
		float nota = (p1 + p2 + pf) / 3;
		//se a média final for maior que 6 ele imprime Aprovado
		if (nota >= 6.0) 
		{
			cout << fixed << setprecision(2) << "Aprovado: " << nota << endl; 
		}
		else
		//se a média for menor que 6 ele imprime Reprovado
		{
			cout << fixed << setprecision(2) <<"Reprovado: " << nota << endl;
		}
	}
	//termina o programa
	return 0;
}