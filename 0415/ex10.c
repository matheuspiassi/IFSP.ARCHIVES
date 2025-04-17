#include "util.h"
#include <stdio.h>

int main(){
    double r;
    printf("Digite o raio do circulo: ");
    scanf("%lf", &r);
    printf("Circunferencia: %.2lf\n", circunferencia(r));  
    printf("Diametro: %.2lf\n", diametro(r));  
    printf("Area: %.2lf\n", area(r));
    return 0;
}