#include <stdio.h>

void mostrarSoma(int resultado) {
    printf("A soma dos dois numeros eh: %d\n", resultado);
}

int main() {
    int valor;
    printf("Digite um valor de soma para exibir: ");
    scanf("%d", &valor);
    mostrarSoma(valor);
    return 0;
}