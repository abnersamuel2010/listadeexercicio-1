#include <stdio.h>

int main() {
    int tabuada = 0;
    int numero, resposta;
    printf("Escolha um numero pra ver sua tabuada: ");
    scanf("%d", &numero);
    while(tabuada < 10){
        tabuada ++;
        resposta = numero*tabuada;
        printf("%d \n",resposta);
    }
    return 0;
}
