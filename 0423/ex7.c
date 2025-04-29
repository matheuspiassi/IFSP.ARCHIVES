#include <stdio.h>

float media(float numeros[]) {
    return (numeros[0] + numeros[1]) / 2.0;
}

float dobro(float numeros[]) {
    numeros[0] *= 2.0;
    numeros[1] *= 2.0;
    return media(numeros);
}

int main() {
    float numeros[2] = {4.0, 6.0};
    float novaMedia = dobro(numeros);

    printf("Valores dobrados: %.2f e %.2f\n", numeros[0], numeros[1]);
    printf("Nova media: %.2f\n", novaMedia);

    return 0;
}