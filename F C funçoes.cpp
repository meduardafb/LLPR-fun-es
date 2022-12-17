#include <stdio.h>
#include <locale.h>

float converterCELparaFAH (float c);
float converterFAHparaCEL (float f);

int main(){
	setlocale(LC_ALL, "POrtuguese_Brazil");
	
	int op;
	float tf, tc;
	
	printf("Conversor de Temperatura");
	
	printf("Escolha uma opção:\n");
	printf("0 - Celsius\n");
	printf("1 - Fahrenheit\n");
	printf("Digite aqui: \n");
	scanf("%d", &op);
	
	if(op == 0){
		printf("Em Celsius\n");
		scanf("%f", &tc);
		tf = converterCELparaFAH (tc);
	}else{
		printf("Em Fahrenheit\n");
		scanf("%f", &tf);
		tc = converterFAHparaCEL (tf);
	}
	printf("Temperatura em Celsius:%.2f C \n", tc);
	printf("Temperatura em Fahrenheit:%.2 F\n", tf);
	
	return 0;
}

float converterCELparaFAH (float c){
	return (c * 9/5) + 32;
	
}

float converterFAHparaCEL (float f){
	return (f - 32) * 5/9;
}
