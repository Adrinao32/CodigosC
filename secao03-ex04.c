#include <stdio.h>

int main(){

	float valor_por_hora, salario;
	int horas_trabalhadas;

	printf("Qual valor voc� recebe por hora: ");
	scanf("%f", &valor_por_hora);

	printf("Quantas horas voc� trabalhou no m�s: ");
	scanf("%d", &horas_trabalhadas);

	salario = (horas_trabalhadas * valor_por_hora);

	printf("Neste m�s voc� vai receber %.2f", salario);
}
