#include <stdio.h>

int palindromo(char *str) {
    char *inicio = str;
    char *fim = str;

    while (*fim) fim++;
    fim--;

    while (inicio < fim) {
        if (*inicio != *fim) return 0;
        inicio++;
        fim--;
    }

    return 1;
}

void inverter_string(char *str) {
    char *inicio = str;
    char *fim = str;
    char temp;

    while (*fim) fim++;
    fim--;

    while (inicio < fim) {
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char texto1[100], texto2[100];
    printf("digite uma palavra para verificar se eh palindromo: ");
    scanf("%s", texto1);
    printf("digite uma palavra para inverter: ");
    scanf("%s", texto2);
    printf("'%s' eh palindromo? %s\n", texto1, palindromo(texto1) ? "sim" : "nao");
    inverter_string(texto2);
    printf("string invertida: %s\n", texto2);

    return 0;
}
