
#include <stdio.h>

int main() {
	
	float raio;
    float area;
    float circunferencia;
    float diametro;
	float pi = 3.14;

	printf("Digite o raio: ");
	scanf("%f", &raio);
	area = (raio * raio) * pi;	
	circunferencia = (2 * pi) * raio;	
	diametro = 2 * raio;
	
	printf("Area: %.2f\n",area);
	printf("Circunferencia: %.2f\n",circunferencia);
	printf("Diametro: %.2f\n",diametro);
}