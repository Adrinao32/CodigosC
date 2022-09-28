#include <stdio.h>

int main(){

	float valor_por_hora, salario;
	int horas_trabalhadas;

	printf("Qual valor você recebe por hora: ");
	scanf("%f", &valor_por_hora);

	printf("Quantas horas você trabalhou no mês: ");
	scanf("%d", &horas_trabalhadas);

	salario = (horas_trabalhadas * valor_por_hora);

	printf("Neste mês você vai receber %.2f", salario);
}
