#include <stdio.h>

int main() {
<<<<<<< HEAD
    int numero, soma = 0;

    for (int i = 1; i <= 3; i++) {
        printf("Informe o %d numero: ", i);
        scanf("%d", &numero);

        soma += numero;
    }

    printf("Resultado: %d\n", soma);
=======
    char mensagem[100];
    int i;

    // Informar mensagem 3 vezes
    for (i = 1; i <= 3; i++) {
        printf("Digite uma mensagem: ");
        scanf(" %99[^\n]", mensagem);
    }

    printf("Resultado: %s\n", mensagem);
>>>>>>> e35bf1c00dd495456b349baac1f9efa30006268a

    return 0;
}
