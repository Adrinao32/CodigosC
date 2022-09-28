#include <stdio.h>

int main(){

	//Variaveis
	int numero, p = 0, i = 0;

	//Entradas
	printf("Digite um numeto: ");
	scanf("%d", &numero);

	//Processamento
	if(numero % 2 == 0){
		p = numero;

	}else{
		i = numero;
	}
	printf("%d\n o numero digitado é par ", p);
	printf("%d o numero digitado é impar", i);

}
