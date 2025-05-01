#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char sobrenome[50];
    char nome_completo[100]; 

       printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite o sobrenome: ");
    scanf("%s", sobrenome);


       strcpy(nome_completo, nome);    
       strcat(nome_completo, " ");        
       strcat(nome_completo, sobrenome); 

     printf("Nome completo: %s\n", nome_completo);

    return 0;
}
