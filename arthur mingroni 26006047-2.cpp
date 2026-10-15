#include <stdio.h>

// Informar mensagem 3 vezes
 char mensagem[100];
    int i;
int main() {

    
    for (i = 1; i <= 3; i++) {
        printf("Digite uma mensagem: ");
        scanf(" %99[^\n]", mensagem);
        
         printf("Resultado: %s\n", mensagem);
    }

    printf("Resultado: %s\n", mensagem);

    return 0;
}
