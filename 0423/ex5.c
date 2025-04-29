#include <stdio.h>

int main() {
    float numeros[2];

    printf("Digite dois numeros reais:\n");
    scanf("%f %f", &numeros[0], &numeros[1]);

    printf("Voce digitou: %.2f e %.2f\n", numeros[0], numeros[1]);

    return 0;
}