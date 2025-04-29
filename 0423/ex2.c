    #include <stdio.h>
    #define PI 3.14159

    int main(void){
        float raio, area;
        printf("Digite o raio: ");
        scanf("%f" , &raio);

        area = PI * (raio * raio);

        printf("a area dessa merda eh: %f" , area);

    }