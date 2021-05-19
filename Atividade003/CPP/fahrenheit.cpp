#include <iostream>
#include <iomanip>
using namespace std;

// função que converte de fahrenheit para celsius
float toCelsius(int degrees){
    return (5.0 * ((degrees-32.0) / 9.0));
}

// função principal
int main(){
    // declarando variáveis
    float fahrenheit;

    // solicitando entrada em formato fahrenheit    
    cout << "\nGraus fahrenheit: ";
    cin >> fahrenheit;
    // limpando tela e reescrevendo a entrada de forma organizada
    system("clear");
    cout << "\nGraus fahrenheit: "<< fixed << setprecision(2) << fahrenheit;
    // imprimindo valor convertido com precisão 2
    cout << "\nGraus Celsius   : "<< fixed << setprecision(2) << toCelsius(fahrenheit);
    
    return 0;
}

// EOF