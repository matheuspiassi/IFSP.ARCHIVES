#include <stdio.h>

int main() {
	
	int a;
    int b;
    int c;

    printf("Digite o numero 1: ");
	scanf("%d", &a);
    
	while(a != -1)
	{
    printf("Digite o numero 2: ");
    scanf("%d", &b);
    
    printf("Digite o numero 3: ");
    scanf("%d", &c);

    if(a > b){
        if(a > c){
            if((c * c) + (b * b) == (a * a) )
            printf("E um triangulo retangulo\n");
        else
            printf("Nao e um triangulo retangulo\n");
            }
        }else{
			if(b > c){
            	if(b > a){
            	    if((c * c) + (a * a) == (b * b) ){
            		printf("E um triangulo retangulo\n");
            	}
        		else{
            		printf("Nao e um triangulo retangulo\n");;
            		}
            	}
        	}else{
                if((b * b) + (a * a) == (c * c) )
            	printf("E um triangulo retangulo\n");
        		else
            	printf("Nao e um triangulo retangulo\n");
            		
            	}     
        }
	printf("Digite o numero 1:");
	scanf("%d", &a);
    }
}