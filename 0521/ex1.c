#include <stdio.h>
#include <math.h>

#define g 9.81

float calcular_tempo_queda(float a) {
    return sqrt((2 * a) / g);
}

float calcular_distancia_liberacao(float v, float a) {
    float t = calcular_tempo_queda(a);
    return v * t;
}

int main() {
    float a, v;

    printf("Digite a altura do avião (em metros): ");
    scanf("%f", &a);
    printf("Digite a velocidade do avião (em m/s): ");
    scanf("%f", &v);

    float t_q = calcular_tempo_queda(a);
    float d = calcular_distancia_liberacao(v, a);

    printf("Tempo de queda: %.2f segundos\n", t_q);
    printf("Distância de liberação antes do alvo: %.2f metros\n", d);

    return 0;
}
