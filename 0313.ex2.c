// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float num1;
    float num2;
    
    printf("Digite o primeiro numero: ");
    scanf("%f" , &num1);
    printf("Digite o segundo numero: ");
    scanf("%f" , &num2);
    
    printf("%2f",( num1>num2 ) ? num1 : num2);
}