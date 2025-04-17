#include <stdio.h>

int pedirNumero() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    return numero;
}

int main() {
    int valor = pedirNumero();
    printf("Voce digitou: %d\n", valor);
    return 0;
}