#include <stdio.h>
#include "igualdade.h"

int main() {
    int a, b, c;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    int maiorNumero = maior(maior(a, b), c);

    printf("O maior numero eh: %d\n", maiorNumero);

    return 0;
}
