#include <stdio.h>

int main (){

	float imc, peso, altura;
	puts("Digite o seu peso: ");
	scanf("%f", &peso);
	puts("Digite a sua altura:");
	scanf("%f", &altura);
	imc = peso/(altura*altura);
	printf("%2f\n",imc);
	if(imc<18.5){
		puts("Abaixo do Peso");
	}else{
		if(imc<25){
			puts("intervalo normal");
		}else{
			if(imc<30){
				puts("Acima do Peso");
			}else{
				if(imc<35){
					puts("Obesidade I");
				}else{
					if(imc<40){
						puts("Obesidade II");
					}else{
						puts("Obesidade III");
					}
				}
			}
		}
	}
	

}