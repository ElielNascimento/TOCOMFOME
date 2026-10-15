#include <stdio.h>

<<<<<<< HEAD
int x;
int main (){
	
	// informar 3 vezes for
	
	for (x; x < 3; x++){
		
	printf("\nResultado:");
	printf("boa noite");

	
	

	}
	
	
	
	
	
	return 0;  
=======
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
>>>>>>> f70777976a2a417c59e5d3d9ed82b41a8d8362c8
}
