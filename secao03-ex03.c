#include <stdio.h>

int main(){

	int metros, centimetros;

	printf("Qual tamanho em metros: ");
	scanf("%d", &metros);

	centimetros = (metros * 100);

	printf("%d metros em centimetros é %d", metros, centimetros);
}
