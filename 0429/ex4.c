#include <stdio.h>

int main() {
    char palavra[6]; 
    char letra;
    int erros = 0;
    int i, encontrada;

    printf("Digite uma palavra de ate 5 letras: ");
    scanf(" %s", palavra); 

    while (erros < 3) {
        printf("Digite uma letra: ");
        scanf(" %c", &letra); 

        encontrada = 0;
        for (i = 0; palavra[i] != '\0'; i++) {
            if (palavra[i] == letra) {
                encontrada = 1;
                break;
            }
        }

        if (encontrada) {
            printf("Letra encontrada na palavra!\n");
        } else {
            erros++;
            printf("Letra NAO encontrada. Tentativas restantes: %d\n", 3 - erros);
        }
    }

    printf("Acabou as tentativas. Encerrando programa.\n");

    return 0;
}
