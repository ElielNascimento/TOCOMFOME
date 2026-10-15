#include <stdio.h>

int main() {
    int i;
    char resposta[30];

    printf("Eu tinha dois cachorros, o Pete e o Repete.\n");

    for (i = 1; i <= 3; i++) {
        printf("O Pete morreu, quem sobrou? ");
        scanf("%29s", resposta);
    }
printf ("fim da brincadeira");
    return 0;
}
