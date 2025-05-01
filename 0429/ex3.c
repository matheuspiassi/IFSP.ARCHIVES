#include <stdio.h>

int compara_senha(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 0; 
        }
        i++;
    }
    return s1[i] == s2[i]; 
}

int main() {
    char senha[20];
    int tentativas = 3;

    while (tentativas > 0) {
        printf("Digite a senha: ");
        scanf("%19s", senha); 

        if (compara_senha(senha, "azimo")) {
            printf("Seja bem vindo!\n");
            break;
        } else {
            tentativas--;
            if (tentativas > 0) {
                printf("Senha errada. tentativas restantes: %d\n", tentativas);
            } else {
                printf("Tente novamente mais tarde\n");
            }
        }
    }

    return 0;
}
