#include <stdio.h>

int main(){

    // declarando variáveis que armazenarão os dois números e o maior
    int a, b, maior;

    // Recebendo os dois números do usuário e armazenando nas variáveis "a" e "b"
    scanf("%d", &a);
    scanf("%d", &b);

    // Verificando se "a" é o maior número
    if(a > b){
        
        // "maior" recebe o valor de "a"
        maior = a;
        // imprimindo o valor de "maior"
        printf("%d ", maior);
    }

    // Verificando se "b" é o maior número
    else if(b > a){

        // "maior" recebe o valor de "b"
        maior = b;
        // imprimindo o valor de "maior"
        printf("%d ", maior);
    }

    // Se nenhum dos números for maior nem menor
    else{

        // Imprime "a" (os dois são iguais mesmo)
        printf("%d\n ", a);
        // Imprime a mensagem abaixo
        printf("Os numeros são iguais");

    }

    printf("\n");
    
    return 0;
}