// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int idade;
    
    printf("Digite a sua Idade: ");
    scanf("%d" , &idade);
    
    puts( ( idade >= 60 )? "aprovado" : "reprovado");
}