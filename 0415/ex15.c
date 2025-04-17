#include <stdio.h>
#include "igualdade.h"

int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (igual(a, b)) {
        printf("Os numeros sao iguais.\n");
    } else {
        printf("Os numeros sao diferentes.\n");
        printf("Maior numero: %d\n", maior(a, b));
        printf("Menor numero: %d\n", menor(a, b));
    }

    return 0;
}