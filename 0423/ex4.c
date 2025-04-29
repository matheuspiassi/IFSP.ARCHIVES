#include <stdio.h>

int main() {
    float numeros[3];
    float soma = 0.0;

    printf("Digite 3 números reais:\n");
    for (int i = 0; i < 3; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i]; 
    }

    printf("A soma dos numeros é: %.2f\n", soma);

    return 0;
}