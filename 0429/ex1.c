#include <stdio.h>

int main() {
   
    char nome[] = "Matheus";
    int i = 0;

    printf("Nome: %s\n", nome);

    while (nome[i] != '\0') {
        printf("* %c ", nome[i]);
        i++;
    }
    printf("*\n");

    return 0;
}