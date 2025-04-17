#include <stdio.h>

int somar(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    int resultado = somar(x, y);
    printf("A soma eh: %d\n", resultado);
    return 0;
}