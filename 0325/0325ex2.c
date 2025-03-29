#include <stdio.h>

int main() {
    char opcao;
    
    while (1) {
        printf("Selecione a opção desejada:\n");
        printf(" S - Secar\n E - Enxaguar e Secar\n L - Lavar, Enxaguar e Secar\n F - Finalizar\n");
        
        printf("Digite: ");
        opcao = getchar();
        getchar();
        
        if (opcao == 'F') {
            printf("Programa finalizado\n");
            break;
        }
        
        switch (opcao) {
            case 'S':
                printf("Iniciando ciclo: Secar...\n");
                break;
            case 'E':
                printf("Iniciando ciclo: Enxaguar e Secar...\n");
                break;
            case 'L':
                printf("Iniciando ciclo: Lavar, Enxaguar e Secar...\n");
                break;
        }
    }
    
    return 0;
}
