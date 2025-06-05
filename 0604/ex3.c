#include <stdio.h>
#include <string.h>

int main(void) {
    char titulo[80];
    char nome[80];
    FILE *fp;
    char comando;

    printf("Digite o titulo do livro: ");
    fgets(titulo, sizeof(titulo), stdin);
    titulo[strcspn(titulo, "\n")] = '\0';  

    fp = fopen(titulo, "r");
    if (fp == NULL) {
        printf("Não foi possivel abrir o arquivo \"%s.txt\".\n", titulo);
        return 1;
    }

    printf("\nPressione 'P' para mostrar o proximo personagem\n");
    printf("Pressione 'F' para finalizar ou se nao houver mais nomes.\n\n");

    while (1) {
        
        do {
            comando = getchar();
        } while (comando == '\n');

        if (comando == 'P' || comando == 'p') {
            if (fgets(nome, sizeof(nome), fp) != NULL) {
                printf("Personagem: %s", nome);
                if (nome[strlen(nome) - 1] != '\n') {
                    printf("\n");
                }
            } else {
                printf("\n-- Fim da lista de personagens --\n");
                break;
            }
        }
        else if (comando == 'F' || comando == 'f') {
            printf("\n-- Encerrando leitura. --\n");
            break;
        }
    }

    fclose(fp);
    return 0;
}
