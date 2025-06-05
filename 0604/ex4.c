#include <stdio.h>

int main(void) {
    int dia, mes, ano;
    int hora, minuto, segundo;

    printf("Digite uma data e hora no formato dd/mm/aaaa hh:mm:ss\n");

    // lê diretamente usando scanf com máscara para "/" e ":"
    if (scanf("%d/%d/%d %d:%d:%d", &dia, &mes, &ano, &hora, &minuto, &segundo) != 6) {
        printf("Formato invalido. Certifique-se de usar dd/mm/aaaa hh:mm:ss\n");
        return 1;
    }

    printf("\nData e hora lidas:\n");
    printf("  Dia:     %02d\n", dia);
    printf("  Mês:     %02d\n", mes);
    printf("  Ano:     %04d\n", ano);
    printf("  Horas:   %02d\n", hora);
    printf("  Minutos: %02d\n", minuto);
    printf("  Segundos:%02d\n", segundo);

    return 0;
}
