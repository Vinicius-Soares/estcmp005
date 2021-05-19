#include <stdio.h>

int main()
{
	//declarando as variáveis da nota 1 e 2 e lendo as entradas
	float p1, p2;
	scanf("%f",&p1);
	scanf("%f",&p2);
	//a nota da média é calculada com a soma das duas notas sobre 2
	float np = (p1 + p2) / 2;
	//se a média é maior que 8 ele imprime Aprovado
	if (np >= 8.0)
	{
		printf("Aprovado: %.2f\n", np);
	}
	else
	{
		//declarando e recebendo a nota final 
		float pf;
		scanf("%f",&pf);
		//a média final é calculada com a soma das três notas divididas por 3
		float nota = (p1 + p2 + pf) / 3;
		//se a média final for maior que 6 ele imprime Aprovado
		if (nota >= 6.0)
		{
			printf("Aprovado: %.2f\n", nota);
		}
		//se a média for menor que 6 ele imprime Reprovado
		else
		{
			printf("Reprovado: %.2f\n", nota);
		}
	}
	//termina o programa
	return 0;
}
