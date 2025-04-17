#include <stdio.h>

int lerNumero() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    return numero;
}

int main() {
    int valor = lerNumero();
    printf("Voce digitou: %d\n", valor);
    return 0;
}