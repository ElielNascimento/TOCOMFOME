#include <stdio.h>

int main() {
    int a, b, c, resultado;

    for (int x = 1; x <= 3; x++) {
        printf("Informe o primeiro numero: ");
        scanf("%d", &a);

        printf("Informe o segundo numero: ");
        scanf("%d", &b);
        
        printf("Informe o terceiro numero: ");
        scanf("%d", &c);

        resultado = a + b + c;
        printf("Resultado: %d\n\n", resultado);
    }

    return 0;
}
