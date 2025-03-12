#include <stdio.h>

int main() {
    int numero ;
    printf("Digite um numero ");
    scanf("%d", &numero);
    if( numero == 0){
        printf("\nSeu numero é zero");
    }else if( numero > 0){
       printf("\nSeu numero é positivo");
    }if( numero < 0){
        printf("\nSeu numero é negativo");
    }
    
    return 0;
}
