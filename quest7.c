#include <stdio.h>

int main() {
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if( idade > 60){
        printf("\nVocê é um idoso");
    }else if( idade >= 18){
        printf("\nVocê é um adulto");
    }else if( idade < 18){
        printf("\nVocê é um criança");
    }
    return 0;
}
