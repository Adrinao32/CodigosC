#include <stdio.h>

int main(){

	int numero, a, b;

	//Entradas
	printf("Informe um numero: ");
	scanf("%d", &numero);

	//Processamento
	if(numero > 0){
		a = numero;
		printf("O %d numero � positivo", numero);
	}else{
		b = numero;
		printf("O %d numero � negativo", numero);
	}


}
