#include <stdio.h>

int main(){

	int n;

	//entradas
	printf("Informe um numero: ");
	scanf("%d", &n);

	//Processamento
	if(n > 100){
		printf("%d", n);
	}
	else{
		n = 0;
		printf("Numero digitado não é maior que 100 %d", n);
	}
}
