#include <stdio.h>

int main(){
    float soma = 0;
    int numero;
    float quantidade = 0;

    printf("Digite um numero (-5 para parar): ");
    scanf("%d" , &numero);

    while(numero != -5){
        soma = soma + numero;
        quantidade += 1;

        printf("Digite um numero (-1 para parar): ");
        scanf("%d" , &numero);

    }
    float media = soma / quantidade;
    printf("Resultado da media: %f" , media);
}