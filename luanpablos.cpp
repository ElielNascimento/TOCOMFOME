#include<stdio.h>


int main (){
	int i, numero;
	
	for (i = 1; i <= 3; i++) {
		printf("Informe o %do numero: ", i);
		scanf("%d", &numero);
		
		printf("Voce digitou: %d\n", numero);
	}
	
	return 0;  
}
