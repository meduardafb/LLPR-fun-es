#include <stdio.h>
#define PI 3.14
#include <locale.h>

float areaDoCirculo(float raio);

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float r, a;
	
	printf("Digite o raio: \n");
	scanf("%f", &r);
	
	a = areaDoCirculo(r);
	
	printf("A �rea do circulo � %.2f cm\n", a);
	
	return 0;
}

float areaDoCirculo(float raio){
	return PI * raio * raio;
}
