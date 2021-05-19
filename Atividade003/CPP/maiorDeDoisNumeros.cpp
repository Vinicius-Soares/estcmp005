#include <iostream>

using namespace std;

int main(){

    // declarando variáveis que armazenarão os dois números e o maior
    int a, b, maior;

    // Recebendo os dois números do usuário e armazenando nas variáveis "a" e "b"
    cin >> a;
    cin >> b;

    // Verificando se "a" é o maior número
    if(a > b){
        
        // "maior" recebe o valor de "a"
        maior = a;
        // imprimindo o valor de "maior"
        cout << maior << "\n";
    }

    // Verificando se "b" é o maior número
    else if(b > a){

        // "maior" recebe o valor de "b"
        maior = b;
        // imprimindo o valor de "maior"
        cout << maior << "\n";
    }

    // Se nenhum dos números for maior nem menor
    else{

        // Imprime "a" (os dois são iguais mesmo)
        cout << a;
        // Imprime a mensagem abaixo
        cout << "Os números são iguais" << "\n";

    }
    
    return 0;
}