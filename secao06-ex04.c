#include <stdio.h>
#include <ctype.h>

int main(){
	//Variaveis
	float altura, peso_ideal;
	char sexo;

	//Entradas
	printf("Informe sua Altura: ");
	scanf("%f", &altura);
	gets(stdin); //corre?ao de bug
	printf("informe o sexo m/f: ");
	scanf("%c", &sexo);

	//Processamento
	if(tolower(sexo) == 'm'){
		peso_ideal = (72.7 * altura) - 58;
		printf("Seu peso idel ? %.2f", peso_ideal);
	}
	if(tolower(sexo) == 'f'){
		peso_ideal = (62.1 * altura) - 44.7;
		printf("Seu peso Ideal ? %.2f", peso_ideal);
	}
	if(tolower(sexo) != 'm' && tolower(sexo) != 'f'){
		printf("Sexo n?o reconhecido. \n");
	}

	printf("ad??o ao programa");
}
