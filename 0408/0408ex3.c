#include <stdio.h>

void subtrai3(int *sub);

int main(void) {
    int numero;
    printf("Digite um numero: ");
    scanf("%d" , &numero);
    
  printf("Recebido: %d\n" , numero);
    subtrai3(&numero);
  printf("Resultado: %d\n", numero);

  printf("X atual: %d\n", numero);
  return 0;
}

void subtrai3(int *sub) {
     *sub = *sub - 3;
}