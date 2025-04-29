#include <stdio.h>

float media(float numeros[]) {
    return (numeros[0] + numeros[1]) / 2.0;
}

float dobro(float numeros[]) {
    numeros[0] *= 2.0;
    numeros[1] *= 2.0;
    return media(numeros);
}

void mostrarVetor(float numeros[]) {
    printf("Vetor: %.2f %.2f\n", numeros[0], numeros[1]);
}

int main() {
    float numeros[2] = {4.0, 6.0};

    printf("Antes de dobrar:\n");
    mostrarVetor(numeros);

    dobro(numeros);

    printf("Depois de dobrar:\n");
    mostrarVetor(numeros);

    return 0;
}