#include <stdio.h>

int main() {
    int limite, i, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &limite);

    for (i = 1; i < limite; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }

    printf("A soma dos multiplos de 3 ou 5 abaixo de %d eh: %d\n", limite, soma);

    return 0;
}