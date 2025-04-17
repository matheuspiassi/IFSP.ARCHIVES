#include <stdio.h>

double diametro(double raio) {
    return 2 * raio;
}

int main() {
    double r;
    printf("Digite o raio do circulo: ");
    scanf("%lf", &r);
    printf("Diametro: %.2lf\n", diametro(r));
    return 0;
}
