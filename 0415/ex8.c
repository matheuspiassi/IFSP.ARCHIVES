#include <stdio.h>


double area(double raio) {
    double pi = 3.14;
    return pi * (raio * raio);
}

int main() {
    double r;
    printf("Digite o raio do circulo: ");
    scanf("%lf", &r);
    printf("Area: %.2lf\n", area(r));
    return 0;
}
