#include <stdio.h>
#include <string.h>


int main(void){
FILE *pArquivo = NULL;
char nome[50];
    printf("Qual o nome do arquivo?:");
    scanf("%49s", nome);
    strcat(nome, ".svg");
    pArquivo = fopen(nome, "w");

    int x;
    int y;
    int wt;
    int ht;

    printf("qual a coordenada do x?:");
    scanf("%d", &x);
    printf("qual a coordenada do y?:");
    scanf("%d", &y);
    printf("qual a largura?:");
    scanf("%d", &wt);
    printf("qual a altura?:");
    scanf("%d", &ht);

    if(pArquivo == NULL){
        printf("Erro ao abrir o arquivo");
    }else{
        fprintf(pArquivo, "<svg version="1.1" width="300" height="200" xmlns="http://www.w3.org/2000/svg\">\n<rect x=\"%d\" width)
    }
    
}