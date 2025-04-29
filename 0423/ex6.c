#include <stdio.h>

float media(float numeros[]) {
    return (numeros[0] + numeros[1]) / 2.0;
}

int main() {
    float numeros[2] = {4.0, 6.0};
    float m = media(numeros);

    printf("Media: %.2f\n", m);

    return 0;
}