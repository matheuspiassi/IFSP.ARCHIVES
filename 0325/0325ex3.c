#include <stdio.h>

int main() {
    int qtdBatata = 0;
    int qtdHamburguer = 0;
    int qtdSuco = 0;
    int qtdCombo = 0;
    char opcao;
    float total = 0;

    printf("Registro de Vendas da Lanchonete do Piassi\n");
    printf("Digite B para Batata, H para Hamburguer, S para Suco, C para Combo, ou X para encerrar.\n");
    
    while (1) {
        printf("Digite a opcao: ");
        scanf(" %c", &opcao);

        if (opcao == 'X') {
        break;
        }

        switch (opcao) {
        case 'B':
            qtdBatata++;
            total += 10.00;
        break;
        case 'H': 
            qtdHamburguer++;
            total += 15.00;
        break;
        case 'S': 
            qtdSuco++;
            total += 9.00;
        break;
        case 'C': 
            qtdCombo++;
            total += 30.00;
        break;
        default:
                printf("Opcao invalida!");
        }
    }

    int totalItens = qtdBatata + qtdHamburguer + qtdSuco + qtdCombo;
    
    printf("\nRelatorio de Vendas:\n");
    printf("Suco:       %d vendidos\n", qtdSuco);
    printf("Batata:     %d vendidas\n", qtdBatata);
    printf("Hamburguer: %d vendidos\n", qtdHamburguer);
    printf("Combos:     %d vendidos\n", qtdCombo);
    printf("-----------------------\n");
    printf("Total:      %d itens\n", totalItens);
    printf("Valor total: R$ %.2f\n", total);
    
    return 0;
}
