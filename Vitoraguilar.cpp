
#include <stdio.h>

int main() {
    int numero, soma = 0;

    // Informar 3 vezes usando for
    for (int i = 1; i <= 3; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        soma += numero;
    }

    printf("Resultado: %d\n", soma);

    return 0;
}
