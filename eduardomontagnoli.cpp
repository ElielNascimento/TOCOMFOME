#include <stdio.h>

int main() {
    int numero, soma = 0;

    for (int i = 1; i <= 3; i++) {
        printf("Informe o %d numero: ", i);
        scanf("%d", &numero);

        soma += numero;
    }

    printf("Resultado: %d\n", soma);

    return 0;
}
