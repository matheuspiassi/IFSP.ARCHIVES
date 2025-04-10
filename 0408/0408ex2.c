#include <stdio.h>

int multi3(int y);

int main(void) {
  int x;
  
  printf("Digita: ");
  scanf("%d" , &x);
  printf("X antes: %d\n", x);

  int resultado = multi3(x);
  printf("Resultado: %d\n", resultado);

  printf("X depois: %d\n", x);
  return 0;
}

int multi3(int y) {
  return y - 3;
}