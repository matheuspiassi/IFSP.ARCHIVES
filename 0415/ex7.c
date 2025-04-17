#include <stdio.h>

double circunferencia(double raio) {
    double pi = 3.14;
    return 2 * pi * raio;
}

int main() {
    double r;
    printf("Digite o raio do circulo: ");
    scanf("%lf", &r);
    printf("Circunferencia: %.2lf\n", circunferencia(r));
    return 0;
}
