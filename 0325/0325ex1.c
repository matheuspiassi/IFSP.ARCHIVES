#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i += 2) {
        soma += i;
    }

    printf("A soma dos numeros impares ate %d é: %d\n", numero, soma);

    return 0;
}
