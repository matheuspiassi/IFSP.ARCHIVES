#include <stdio.h>

void maior(float numeros[]) {
    if (numeros[1] > numeros[0]) {
        float temp = numeros[0];
        numeros[0] = numeros[1];
        numeros[1] = temp;
    }
}

int main() {
    float numeros[2] = {7.0, 8.0};

    printf("Antes: %.2f %.2f\n", numeros[0], numeros[1]);
    maior(numeros);
    printf("Depois: %.2f %.2f\n", numeros[0], numeros[1]);

    return 0;
}