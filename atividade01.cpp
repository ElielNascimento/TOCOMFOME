#include <stdio.h>

int main() {
    char mensagem[100];
    int i;

    // Informar mensagem 3 vezes
    for (i = 1; i <= 3; i++) {
        printf("Digite uma mensagem: ");
        scanf(" %99[^\n]", mensagem);
    }

    printf("Resultado: %s\n", mensagem);

    return 0;
}
