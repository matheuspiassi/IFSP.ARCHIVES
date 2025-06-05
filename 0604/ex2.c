#include <stdio.h>
#include <string.h>

int main(void) {
    char titulo[80];
    char nome[80];
    FILE *fp;

    printf("Digite o titulo do livro: ");
    fgets(titulo, sizeof(titulo), stdin);
    titulo[strcspn(titulo, "\n")] = '\0'; 

    fp = fopen(titulo, "w");
    if (fp == NULL) {
        printf("Erro ao criar o arquivo \"%s.txt\".\n", titulo);
        return 1;
    }

    printf("Digite os nomes dos personagens\n");
    printf("Para encerrar, pressione apenas ENTER em uma linha vazia.\n\n");

    while (1) {
        printf("Nome do personagem: ");
        fgets(nome, sizeof(nome), stdin);
        if (nome[0] == '\n') {
            break;
        }
        nome[strcspn(nome, "\n")] = '\0';
        fprintf(fp, "%s\n", nome);
    }

    fclose(fp);
    printf("\nCadastro concluido, salvo em:  \"%s.txt\".\n", titulo);
    return 0;
}
