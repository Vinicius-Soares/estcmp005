#include <stdio.h>
#include <stdlib.h>

// função que converte de fahrenheit para celsius
float toCelsius(int degrees){
    return (5.0 * ((degrees-32.0) / 9.0));
}

// função principal
int main(){
    // declarando variáveis
    float fahrenheit;

    // solicitando entrada em formato fahrenheit    
    printf("\nGraus fahrenheit: ");
    scanf("%f", &fahrenheit);
    // limpando tela e reescrevendo a entrada de forma organizada
    system("clear");
    printf("\nGraus fahrenheit: %.2f°F", fahrenheit);
    // imprimindo valor convertido com precisão 2
    printf("\nGraus Celsius   : %.2f°C", toCelsius(fahrenheit));
    
    return 0;
}

// EOF