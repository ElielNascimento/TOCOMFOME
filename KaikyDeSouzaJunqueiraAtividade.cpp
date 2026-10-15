#include<stdio.h>

int main(){
	char nome[100];
	for(int i = 0; i < 3;i ++){
		printf("Escreve o nome ai\n");
		scanf("%s", nome);
	}
	printf(nome);
	return 0;
}
