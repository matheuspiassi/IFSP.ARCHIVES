#include <stdio.h>

int main (){

	float nota;
	puts("Digite a nota: ");
	scanf("%f", &nota);
	if(nota >=9){
		puts("A");
	}else{
		if(nota>=8){
			puts("B");
		}else{
			if(nota>=7){
				puts("C");
			}else{
				if(nota>=6){
					puts("D");
				}else{
					puts("F");
				}
			}
		}
	}
	
	
}