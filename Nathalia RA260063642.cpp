#include <stdio.h>


int numero;
int soma = 0;

int main (){
	
	for (int i = 1; i <= 3; i
	 ++) {
	
	printf("Informe três numeros: ");
	scanf("%d",&numero);
	
	soma += numero;
	}
	
	
	
	printf ("Resultado da soma dos tes numeros eh: %d", soma);
	
	
	return 0;	
}
