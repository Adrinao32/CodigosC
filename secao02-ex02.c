#include <stdio.h>



int main(){

	int num1, num2, soma, multiplicacao;


	printf("Informe o primeiro n�maro: ");
	scanf("%d", &num1);

	printf("Informe o segundo n�mero: ");
	scanf("%d", &num2);

	soma = num1 + num2;

	multiplicacao = soma * num1;

	printf("O resultado � %d", multiplicacao);

}
